#include<iostream>
using namespace std;
class Number
{
    int x;
public:
    Number()
    {
        x=0;
    }
    Number(int a)
    {
        x=a;
    }
    Number operator+(Number n)
    {
        Number temp;
        temp.x=x+n.x;
        return temp;
    }
    Number operator-(Number n)
    {
        Number temp;
        temp.x=x-n.x;
        return temp;
    }
    void display()
    {
        cout<<x<<endl;
    }
};
int main()
{
    Number n1(10), n2(20), n3;
    n3=n1+n2;
    cout<<"Addition=";
    n3.display();

    n3=n1-n2;
        cout<<"Subtraction=";
    n3.display();

    return 0;
}
