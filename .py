class Employee:
    def __init__(self, name, age, service_year, salary):
        self.name = name
        self.age = age
        self.service_year = service_year
        self.salary = salary

    def getName(self):
        return self.name

    def getAge(self):
        return self.age

    def getServiceYear(self):
        return self.service_year

    def getSalary(self):
        return self.salary


e = Employee("John", 30, 5, 50000)
print(e.getName(), e.getSalary())
