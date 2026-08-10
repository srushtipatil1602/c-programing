#include<iostream>
using namespace std;
class fraction
{
    private:
    int a,b,c,d;
    public:
    void input()
    {
        cout<<"Enter 1 fraction no.:"<<endl;
        cin>>a>>b;
        cout<<"Enter 2 fraction no.:";
        cin>>c>>d;

    }
    void f_add()
    {
        cout<<"numerator:"<<(a*d)+(b*c)<<endl;
        cout<<"denominator:"<<(b*d);
    }
    void f_sub()
    {
        cout<<"numerator:"<<(a*d)-(b*c)<<endl;
        cout<<"denominator:"<<(b*d);
    }
    
};
int main()
{
    fraction fr;
    fr.input();
    fr.f_add();
    fr.f_sub();
    return 0;
}