#include<iostream>
using namespace std;
int main()
{
int a,b,rem,reverse=0;
cout<<"enter value:";
cin>>a;
a=b;
while (a!=0)
{
rem=a%10;
reverse=reverse*10+rem;
a=a/10;
}
cout<<b;
cout<<"reversed number:"<<reverse;
if (b == reverse)
cout<<"palindrome number";
else
cout<<"not a palindrome number";
return 0;
}


