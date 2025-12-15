#include<iostream>
using namespace std;

class Student{
    // Properties
    string name;
    float cgpa;

    //Methods
    void getPercentage(){
        cout<< (cgpa * 10) <<"%" <<endl;
    }

};

class User {
    string username;
    string password;
    string bio;

    void deactivite(){
        cout<<"Deleting account" <<endl;
    }
    void editBio(string newBio){
        bio = newBio;
    }
};

int main(){
    Student s1; // Objects

    cout<<sizeof(s1);
    return 0;
}