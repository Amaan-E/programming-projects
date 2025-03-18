#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *tree = NULL; // Initialize tree as NULL

// Function prototypes
void create_tree();
struct node *insertElement(struct node *, int);
void preorderTraversal(struct node *);
void inorderTraversal(struct node *);
void postorderTraversal(struct node *);
struct node *findSmallestElement(struct node *);
struct node *findLargestElement(struct node *);
struct node *deleteElement(struct node *, int);
struct node *mirrorImage(struct node *);
int totalNodes(struct node *);
int totalExternalNodes(struct node *);
int totalInternalNodes(struct node *);
int Height(struct node *);
struct node *deleteTree(struct node *);

int main() {
    int option, val;
    struct node *ptr;

    create_tree();

    do {
        printf("\n ******MAIN MENU******* \n");
        printf("1. Insert Element\n");
        printf("2. Preorder Traversal\n");
        printf("3. Inorder Traversal\n");
        printf("4. Postorder Traversal\n");
        printf("5. Find the smallest element\n");
        printf("6. Find the largest element\n");
        printf("7. Delete an element\n");
        printf("8. Count the total number of nodes\n");
        printf("9. Count the total number of external nodes\n");
        printf("10. Count the total number of internal nodes\n");
        printf("11. Determine the height of the tree\n");
        printf("12. Find the mirror image of the tree\n");
        printf("13. Delete the tree\n");
        printf("14. Exit\n");

        printf("\n Enter your option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("\n Enter the value of the new node: ");
                scanf("%d", &val);
                tree = insertElement(tree, val);
                break;

            case 2:
                printf("\n The elements of the tree are (Preorder): \n");
                preorderTraversal(tree);
                break;

            case 3:
                printf("\n The elements of the tree are (Inorder): \n");
                inorderTraversal(tree);
                break;

            case 4:
                printf("\n The elements of the tree are (Postorder): \n");
                postorderTraversal(tree);
                break;

            case 5:
                ptr = findSmallestElement(tree);
                if (ptr != NULL)
                    printf("\n Smallest element is: %d", ptr->data);
                else
                    printf("\n The tree is empty.");
                break;

            case 6:
                ptr = findLargestElement(tree);
                if (ptr != NULL)
                    printf("\n Largest element is: %d", ptr->data);
                else
                    printf("\n The tree is empty.");
                break;

            case 7:
                printf("\n Enter the element to be deleted: ");
                scanf("%d", &val);
                tree = deleteElement(tree, val);
                break;

            case 8:
                printf("\n Total number of nodes = %d", totalNodes(tree));
                break;

            case 9:
                printf("\n Total number of external nodes = %d", totalExternalNodes(tree));
                break;

            case 10:
                printf("\n Total number of internal nodes = %d", totalInternalNodes(tree));
                break;

            case 11:
                printf("\n The height of the tree = %d", Height(tree));
                break;

            case 12:
                tree = mirrorImage(tree);
                printf("\n Mirror image created.");
                break;

            case 13:
                tree = deleteTree(tree);
                if (tree == NULL)
                    printf("\n Tree deleted successfully.");
                break;

            case 14:
                printf("\n Exiting...\n");
                break;

            default:
                printf("\n Invalid option! Please try again.\n");
        }
    } while (option != 14);

    return 0;
}

void create_tree() {
    // No action needed as 'tree' is initialized to NULL
}

struct node *insertElement(struct node *tree, int val) {
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = val;
    ptr->left = NULL;
    ptr->right = NULL;

    if (tree == NULL) {
        return ptr; // Tree was empty
    } else {
        struct node *parentptr = NULL;
        struct node *nodeptr = tree;

        while (nodeptr != NULL) {
            parentptr = nodeptr;
            if (val < nodeptr->data)
                nodeptr = nodeptr->left;
            else
                nodeptr = nodeptr->right;
        }

        if (val < parentptr->data)
            parentptr->left = ptr;
        else
            parentptr->right = ptr;
    }

    return tree;
}

void preorderTraversal(struct node *tree) {
    if (tree != NULL) {
        printf("%d\t", tree->data);
        preorderTraversal(tree->left);
        preorderTraversal(tree->right);
    }
}

void inorderTraversal(struct node *tree) {
    if (tree != NULL) {
        inorderTraversal(tree->left);
        printf("%d\t", tree->data);
        inorderTraversal(tree->right);
    }
}

void postorderTraversal(struct node *tree) {
    if (tree != NULL) {
        postorderTraversal(tree->left);
        postorderTraversal(tree->right);
        printf("%d\t", tree->data);
    }
}

struct node *findSmallestElement(struct node *tree) {
    if ((tree == NULL) || (tree->left == NULL))
        return tree;
    else
        return findSmallestElement(tree->left);
}

struct node *findLargestElement(struct node *tree) {
    if ((tree == NULL) || (tree->right == NULL))
        return tree;
    else
        return findLargestElement(tree->right);
}

struct node *deleteElement(struct node *tree, int val) {
    struct node *cur, *parent, *suc, *psuc;

    if (tree == NULL) {
        printf("\n The tree is empty ");
        return tree;
    }

    parent = NULL;
    cur = tree;

    while (cur != NULL && cur->data != val) {
        parent = cur;
        cur = (val < cur->data) ? cur->left : cur->right;
    }

    if (cur == NULL) {
        printf("\n Element not found in the tree.");
        return tree;
    }

    // Case 1: Node with only one child or no child
    if (cur->left == NULL)
        suc = cur->right;
    else if (cur->right == NULL)
        suc = cur->left;
    else { // Case 2: Node with two children
        psuc = cur;
        suc = cur->right;

        while (suc && suc->left != NULL) {
            psuc = suc;
            suc = suc->left;
        }

        cur->data = suc->data; // Copy successor's value to current

        if (psuc == cur)
            psuc->right = suc->right;
        else
            psuc->left = suc->right;

        free(suc);
        return tree;
    }

    if (parent == NULL)
        return suc; // Deleting root
    else if (parent->left == cur)
        parent->left = suc;
    else
        parent->right = suc;

    free(cur);

    return tree;
}

int totalNodes(struct node *tree) {
    if (tree == NULL)
        return 0;
    return 1 + totalNodes(tree->left) + totalNodes(tree->right);
}

int totalExternalNodes(struct node *tree) {
    if (tree == NULL)
        return 0;
    if (tree->left == NULL && tree->right == NULL)
        return 1; // Leaf Node
    return totalExternalNodes(tree->left) + totalExternalNodes(tree->right);
}

int totalInternalNodes(struct node *tree) {
    if (tree == NULL || (tree->left == NULL && tree->right == NULL))
        return 0; // No internal nodes in an empty or leaf-only subtree
    return 1 + totalInternalNodes(tree->left) + totalInternalNodes(tree->right);
}

int Height(struct node *tree) {
    if (tree == NULL)
        return -1; // Height of an empty tree is -1
    int leftHeight = Height(tree->left);
    int rightHeight = Height(tree->right);

    return 1 + ((leftHeight > rightHeight) ? leftHeight : rightHeight);
}

struct node *mirrorImage(struct node *tree) {
    if (tree != NULL) {
        struct node *temp;

        mirrorImage(tree->left);
        mirrorImage(tree->right);

        temp = tree->left;
        tree->left = tree->right;
        tree->right = temp;
    }
    
    return tree;
}

struct node *deleteTree(struct node *tree) {
    if (tree != NULL) {
        deleteTree(tree->left);
        deleteTree(tree->right);

        free(tree); // Free memory for each deleted subtree
    }
    
    return NULL; // Return null after deleting everything
}
