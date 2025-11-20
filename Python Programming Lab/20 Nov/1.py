from datetime import date, timedelta


class Book:
    def __init__(self, books: dict) -> None:
        self.avail_books: dict = books
        self.issued = {}
        """
        books = {name: copies}
        issued = reg : book, date
         issued = {reg : {
                    book : date
                    book2: date2
         }}
       """
    def query(self, reg: str):
        if reg in self.issued:
            return f"Reg: {reg}, Info: {self.issued[reg]}"

    def check(self, book: str) -> bool:
        if book in self.avail_books and self.avail_books[book] > 0:
            return True
        return False

    def issue_book(self, book: str, reg: str, d: date):
        # date(2025, 11, 19)
        if self.check(book):
            if reg in self.issued:
                self.issued[reg][book] = d
            else:
                self.issued[reg] = {book: d}
            self.avail_books[book] -= 1
        # print(self.avail_books)
        # print(self.issued)

    def return_book(self, book: str, reg: str, return_date: date):
        fine = 0
        success = False
        if book in self.avail_books:
            self.avail_books[book] += 1
            if return_date - self.issued[reg][book] > timedelta(days=15):
                fine = float((return_date - (self.issued[reg][book] + timedelta(days=15))).days) * 1
                self.issued[reg].pop(book)
            success = True
        return fine, success

    def available_books(self):
        a = []
        for b in self.avail_books:
            if self.avail_books[b] > 0:
                a.append(b)
                
        return a
        
        
    

lib = Book({"1984": 2, "Deep Work": 3, "ThinkPython": 1})

print(lib.available_books())
lib.issue_book("ThinkPython", "123", date(2025, 11, 19))
print(lib.query("123"))
print(lib.available_books())
print(lib.return_book("ThinkPython", "123", date(2025, 11, 20)))
print(lib.available_books())