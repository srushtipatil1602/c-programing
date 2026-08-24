#include <iostream>
using namespace std;

class Employee
{
    int id;
    string name;
    float salary;

public:

    
    Employee()
    {
        id = 0;
        name = "Unknown";
        salary = 0;
    }

    
    Employee(int i, string n, float s)
    {
        id = i;
        name = n;
        salary = s;
    }

    
    Employee(Employee &e)
    {
        id = e.id;
        name = e.name;
        salary = e.salary;
    }

    void display()
    {
        cout << id << " " << name << " " << salary << endl;
    }
};

int main()
{
    Employee e1;
    Employee e2(101, "Rahul", 50000);
    Employee e3(e2);

    e1.display();
    e2.display();
    e3.display();

    return 0;
}
