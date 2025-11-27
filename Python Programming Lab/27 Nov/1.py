class Result:
    def __init__(self, students: dict = {}):
        self.students = students
        """
            student = {id: name, marks}
        """

    def search(self, id):
        return self.students[id]

    def sorted_marks(self, reverse=True):
        marks = {}
        for id in self.students:
            marks[self.students[id][1]] = [id, self.students[id][0]]

        return dict(sorted(marks.items(), reverse=reverse))

    def top(self, k: int) -> dict:
        ked = {}
        i = 0

        s = self.sorted_marks()
        for marks in s:
            if i == k:
                break
            ked[s[marks][0]] = [s[marks][1], marks]
            i += 1
        return ked

    def count_failures(self) -> int:
        count = 0
        for marks in self.sorted_marks(False):
            if marks > 15:
                break
            count += 1

        return count

    def add_student(self, id, name, marks):
        self.students[id] = [name, marks]

        return {id: [self.students[id][0], self.students[id][1]]}


r = Result()
print(r.add_student("1", "A", 100))
print(r.add_student("2", "B", 50))
print(r.add_student("3", "C", 25))
print(r.add_student("4", "D", 15))
print(r.add_student("5", "E", 10))
print(r.add_student("6", "F", 80))

print(r.search("1"))
print(r.sorted_marks())
print(r.top(5))
print(r.count_failures())
