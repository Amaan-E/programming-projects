class Node:
    def __init__(self, data, next=None):
        self.data = data
        self.next = next

class LinkedList:
    def __init__(self, head=None):
        self.head = head
    
    def add(self, data):
        new_node = Node(data, self.head)
        self.head = new_node
    
    def print_l(self):
        cur = self.head
        while cur:
            print(cur.data, end="->")
            cur = cur.next
    
def next_to_largest(head):
    cur = head
    largest = -1
    while cur:
        if cur.data > largest:
            largest = cur.data
        cur = cur.next
    n = -1
    cur = head
    while cur:
        if cur.data > n and cur.data != largest:
            n = cur.data
        cur = cur.next
        
    return n
    
    
root = LinkedList(Node(1))
root.add(2)
root.add(3)
root.print_l()

print("\n", next_to_largest(root.head))