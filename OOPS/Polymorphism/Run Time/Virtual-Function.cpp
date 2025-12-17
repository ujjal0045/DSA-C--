#include<iostream>
#include<string>
using namespace std;

class Parent{
public:
    virtual void hello(){

    }
};

class Child : public Parent{
public:
    void hello(){
        cout<<"Child class\n";
    }
};

int main(){
    Child c1;
    Parent *ptr;

    ptr = &c1; // Run time Binding
    ptr->hello(); // Virtual Function
}