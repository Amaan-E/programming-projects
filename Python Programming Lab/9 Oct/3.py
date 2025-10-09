def calc(a, b, sym):
    if sym == '+':
        return a + b
    elif sym == '-':
        return a - b
    elif sym == '*':
        return a * b
    else:
        return a / b
    
def main():
    print(calc(2, 3, '+'))
    print(calc(2, 3, '-'))
    print(calc(2, 3, '*'))
    print(calc(2, 3, '/'))

main()