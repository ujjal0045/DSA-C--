#include<iostream>
#include<string>

using namespace std;

class Student{
    
    string name;
    float cgpa;
public:
    //Methods
    void getPercentage(){
        cout<< (cgpa * 10) <<"%" <<endl;
    }
    // Learn setter  (set the value )
    void setName(string nameVal){
        name = nameVal;
    }
    void setCgpa(float cgpaVal){
        cgpa = cgpaVal;
    }
    // Gatter gives the output(basically return the value)
    string getName(){
        return name;
    }
    float getCgpa(){
        return cgpa;
    }

};

int main(){
    Student s1; // Objects
    // Set the data
    s1.setName("Ujjwal burnwal");
    s1.setCgpa(8.91);
    // get the data
    cout<<s1.getName()<<endl;
    cout<<s1.getCgpa()<<endl;

    return 0;
}