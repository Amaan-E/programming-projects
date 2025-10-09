
def checkDiv(x: int):
    return x % 3 == 0 and x % 5 == 0 and not(x % 7)

def main():
    print(checkDiv(105))

main()