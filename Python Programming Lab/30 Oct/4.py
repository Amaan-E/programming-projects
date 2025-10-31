customers = int(input("No of Customers: "))
dict = {}

for i in range(customers):
    name = input("Customer Name: ")
    units = float(input("Units: "))
    dict[name] = []
    dict[name].append(units)

    bill = 0
    if units <= 100:
        bill += 2.5 * units
    if units > 100 and units <= 200:
        bill += 3.9 * units
    if units > 200:
        bill += (5.0 * units)

    dict[name].append(bill)

total = 0
for i in dict:
    total += dict[i][1]
    print(f"Customer: {i}, Units: {dict[i][0]}, Bill(₹): {dict[i][1]}")
print("Revenue Collected:", total)