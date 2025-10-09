# def checkTriangle(a, b, c):
#     # return ((a + b + c) <= 180) if True else False
#     return (a + b + c) <= 180

# Sum of two sides should be greater than third.
def checkTriangle(a, b, c):
    return a + b > c or b + c > a or a + c > b

def main():
    print(checkTriangle(12, 32, 60))

if __name__ == "__main__":
    main()