#include <iostream>
using namespace std;
class Student
{
protected:
    string name;
    int rollno;
public:
    void getStudent()
    {
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter roll no:";
        cin>>rollno;
    }
};
class Student_marks: 
public Student
{
protected:
    int m1,m2,m3,m4,m5;
    int total;
public:
    void getMarks()
    {
        cout<<"Enter marks of 5 subjects";
        cin>>m1>>m2>>m3>>m4>>m5;
        total=m1+m2+m3+m4+m5;
    }
};
class StudentResult: public 
Student_marks
{
    float percentage;
public:
    void calculate()
    {
        percentage=total/5.0;
    }
    void display()
    {
        cout<<"\n student result"<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"Roll no:"<<rollno<<endl;
        cout<<"Total marks:"<<total<<endl;
        cout<<"percentage:"<<percentage<<endl;
    }
};
int main()
{
    StudentResult s;
    s.getStudent();
    s.getMarks();
    s.calculate();
    s.display();

    return 0;
}
