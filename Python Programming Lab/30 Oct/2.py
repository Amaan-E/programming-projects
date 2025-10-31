def Fibonacci(n):
    a = 0
    b = 1
    # print("0 1", end=" ")
    for _ in range(n):
        print(b, end=" ")
        c = a + b
        a = b
        b = c


Fibonacci(8)