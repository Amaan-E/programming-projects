#include <stdlib.h>
#include <stdio.h>

struct node {
    struct node *left;
    struct node *right;
    int data;
};

struct node *tree = NULL;

void Insert();
void PreorderTraversal(struct node *tree);
void InorderTraversal(struct node *tree);
void PostorderTraversal(struct node *tree);
void DeleteElement();

int main() {
    for(;;) {
        int x;
        printf("Menu:- \n"
            "1. Insert.\n"
            "2. Preorder Traversal.\n"
            "3. Inorder Traversal.\n"
            "4. Postorder Traversal.\n"
            "5. Delete.\n"
            "6. Exit.\n"
            "Enter: "
        );
        scanf("%d", &x);
        switch (x) {
            case 1:
                Insert();
                break;
            case 2:
                printf("\n PreorderTraversal: ");
                PreorderTraversal(tree);
                printf("\n\n");
                break;
            case 3:
                printf("\n InorderTraversal: ");
                InorderTraversal(tree);
                printf("\n\n");
                break;
            case 4:
                printf("\n PostorderTraversal:");
                PostorderTraversal(tree);
                printf("\n\n");
                break;
            case 5:
                DeleteElement();
                break;
            case 6:
                return 0;
        }
    }
}

void Insert() {
    struct node *ptr = malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return; // Handle memory allocation failure
    }

    printf("Enter data: ");
    int d;
    scanf("%d", &d);
    ptr->data = d;
    ptr->left = NULL;
    ptr->right = NULL;

    // If the tree is empty, set the new node as root
    if (tree == NULL) {
        tree = ptr; // Assigning the new node as root
        return;
    } else {
        struct node *parentptr = NULL;
        struct node *nodeptr = tree;

        // Find the correct position for the new node -- Traverse
        while (nodeptr != NULL) {
            parentptr = nodeptr;
            if (d < nodeptr->data)
                nodeptr = nodeptr->left;
            else
                nodeptr = nodeptr->right;
        }

        // Insert the new node as a child of its parent
        if (d < parentptr->data)
            parentptr->left = ptr;
        else
            parentptr->right = ptr;
    }
}


void PreorderTraversal(struct node *tree) {
    if (tree != NULL) {
        printf("%d ", tree->data);
        PreorderTraversal(tree->left);
        PreorderTraversal(tree->right);
    }
}

void InorderTraversal(struct node *tree) {
    if (tree != NULL) {
        InorderTraversal(tree->left);
        printf("%d ", tree->data);
        InorderTraversal(tree->right);
    }
}

void PostorderTraversal(struct node *tree) {
    if (tree != NULL) {
        PostorderTraversal(tree->left);
        PostorderTraversal(tree->right);
        printf("%d ", tree->data);
    }
}
void DeleteElement() {
    struct node *cur, *parent, *suc, *psuc;

    if (tree == NULL) {
        printf("\n The tree is empty ");
        return;
    }

    int val;
    printf("Enter value to delete: ");
    scanf("%d", &val);

    parent = NULL;
    cur = tree;

    // Find the node to delete
    while (cur != NULL && cur->data != val) {
        parent = cur;
        cur = (val < cur->data) ? cur->left : cur->right;
    }

    if (cur == NULL) {
        printf("\n Element not found in the tree.");
        return;
    }

    // Case 1: Node with only one child or no child
    if (cur->left == NULL) {
        suc = cur->right; // Successor is right child
    } else if (cur->right == NULL) {
        suc = cur->left; // Successor is left child
    } else { // Case 2: Node with two children
        psuc = cur; // Parent of successor
        suc = cur->right; // Start with right child

        // Find the leftmost child of the right subtree (successor)
        while (suc->left != NULL) {
            psuc = suc;
            suc = suc->left;
        }

        // Copy successor's value to current node
        cur->data = suc->data;

        // Adjust pointers to remove successor from its parent
        if (psuc == cur) {
            psuc->right = suc->right; // If successor is direct child
        } else {
            psuc->left = suc->right; // Bypass successor
        }

        free(suc); // Free memory of successor
        return; // Exit after deletion
    }

    // Handle deletion for parent nodes
    if (parent == NULL) {
        tree = suc; // Deleting root, update tree pointer
    } else if (parent->left == cur) {
        parent->left = suc; // Link parent's left to successor
    } else {
        parent->right = suc; // Link parent's right to successor
    }

    free(cur); // Free memory of current node
}
