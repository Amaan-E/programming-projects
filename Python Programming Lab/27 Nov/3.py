class Tree:
    def __init__(self, data, left=None, right=None):
        self.data = data
        self.left = left
        self.right = right

# i = 0
def going_deep(root):
    if not root:
        return 0
    a = going_deep(root.left)
    b = going_deep(root.right)
    # global i 
    # i += 1
    # print(f"{i} : a {a}, b {b}, max {max(a, b)}")
    return max(a, b) + 1

root = Tree("A")
root.left = Tree("B")
root.right = Tree("C")
root.left.left = Tree("D")

print(going_deep(root))