#include<iostream>
#include<string>
using namespace std;

class Person{
protected:
    string name;
    int age;
public:
    Person(string n,int a){
        name = n;
        age = a;
    }

};

class Student : public Person{
    string StudentID;
public:
    
    Student(string name,int age,string StudentID) : Person(name,age){
        this->name = name;
        this->age = age;
        this->StudentID = StudentID;
    }
    void studentInfo(){
        cout<<"Student Name : "<<name<<endl;
        cout<<"Student Age : "<<age<<endl;
        cout<<"Student Id : "<<StudentID<<endl;
    }
};

int main(){
    Student s1("Alice",20,"S12345");
    s1.studentInfo();
}