def SumDiv5():
    div = []
    for i in range(1, 101):
        if not i % 5:
            div.append(i)

    return sum(div)

print(SumDiv5())