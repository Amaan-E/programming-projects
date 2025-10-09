def leap(year: int):
    return year % 4 == 0 or (year % 100 == 0 and year % 400 != 0)

def main():
    # if leap(2024):
        # print("True")
    # else:
        # print("False")
    print(leap(2016))

main()