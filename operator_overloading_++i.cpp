#include <iostream>
using namespace std;

class Number
{
    int x;

public:
    Number(int n)//constuctor
    {
        x = n;
    }
    void operator++()
    {
        ++x;
    }
    void display()
    {
        cout << "Value of x = " << x << endl;
    }
};

int main()
{
    int value;

    cout << "Enter value of x: ";
    cin >> value;

    Number n(value);//object

    cout << "Before increment: ";//og value
    n.display();

    ++n;//n is an object so overloading is called

    cout << "After prefix increment: ";
    n.display();

    return 0;
}
