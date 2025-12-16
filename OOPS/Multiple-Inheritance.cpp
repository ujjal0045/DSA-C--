#include<iostream>
#include<string>
using namespace std;

class Teacher {
    public:
        int salary;
        string subject;
};

class Student{
    public:
        int rollno;
        float cgpa;
};

class TA : public Teacher, public Student{
    public:
        string name;
};

int main(){
    TA t1;
    t1.name = "Ujjal Burnwal";
    t1.subject = "Digital Electronics";
    t1.cgpa = 8.91;

    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.cgpa<<endl;
}