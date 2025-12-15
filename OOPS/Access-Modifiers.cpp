#include<iostream>
using namespace std;

class Student{
public:
    // Properties
    string name;
    float cgpa;

    //Methods
    void getPercentage(){
        cout<< (cgpa * 10) <<"%" <<endl;
    }

};

int main(){
    Student s1; // Objects
    cout<<sizeof(s1)<<endl;

    s1 .name= "Ujjal Burnwal";
    s1.cgpa=8.91;
    cout<<s1.name<<endl;
    s1.getPercentage();
    return 0;
}