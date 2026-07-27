#include<iostream>
using namespace std;
int main()
{
int a,rem,reverse=0;
cout<<"enter value:";
cin>>a;
while (a!=0)
{
rem=a%10;
reverse=reverse*10+rem;
a=a/10;
}
cout<<"reversed number:"<<reverse;
return 0;

}


