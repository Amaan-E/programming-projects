def SecondLargest(list: list):
    largest = 0
    for i in list:
        if i > largest:
            largest = i

    secondLargest = -1
    for i in list:
        if i > secondLargest and i != largest:
            secondLargest = i

    return secondLargest

l = [1, 2, 3, 4, 5]
print(SecondLargest(l)) 