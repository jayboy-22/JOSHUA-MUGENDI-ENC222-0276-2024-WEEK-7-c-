#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int age, serviceYear;
    double salary;

public:
    Employee(string n, int a, int s, double sal) {
        name = n; age = a; serviceYear = s; salary = sal;
    }

    ~Employee() {}

    string getName() { return name; }
    int getAge() { return age; }
    int getServiceYear() { return serviceYear; }
    double getSalary() { return salary; }
};

int main() {
    Employee e("John", 30, 5, 50000);
    cout << e.getName() << " " << e.getSalary();
    return 0;
}
