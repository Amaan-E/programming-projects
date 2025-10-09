def swap(a, b):
    a = a + b
    b = a - b
    a = a - b

    return (a, b)

def main():
    # a = 5
    # b = 6
    (a, b) = (5, 6)
    print("Before Swap: ", a, b)

    (a, b) = swap(a, b)

    print("After Swap: ", a, b)

main()


