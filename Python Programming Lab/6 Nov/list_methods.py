def list_mehods(a: list):
    print("append: ", a.append(1), a)
    print("extend: ", a.extend([2, 3]), a)
    print("insert: ", a.insert(3, 4), a)
    print("remove: ", a.remove(4), a)
    print("pop: ", a.pop(2), a)
    print("index: ", a.index(2), a)
    print("count: ", a.count(1), a)
    print("sort: ", a.sort(), a)
    print("reverse: ", a.reverse(), a)
    b = a.copy()
    print("len: ", len(b), b)
    print("min: ", min(b), b)
    print("max: ", max(b), b)
    print("sum: ", sum(b), b)
    print("in: ", 2 in b, b)
    del a[0:1]


li = []
list_mehods(li)
print("a", li)
