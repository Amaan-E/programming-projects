class Account:
    def __init__(self, name: str, amount: float):
        self.amount = amount
        self.name = name

    def __str__(self):
        return f"Name: {self.name}, Amount: {self.amount}"

    def deposit(self, amount: float):
        self.amount += amount
        
    def withdraw(self, amount: float):
        if amount < self.amount:
            self.amount -= amount
            return self.amount
        return -1
    
a = Account("AE", 10000)
a.deposit(1000)
a.withdraw(500)
print(a)