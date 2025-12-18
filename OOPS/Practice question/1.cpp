#include<iostream>
#include<string>
using namespace std;

class Parent{
public:
    Parent(){
        cout<<"Consturctor of parent\n";
    }
    ~Parent(){
        cout<<"Destructor of parent\n";
    }
};

class Child : public Parent{
public:
    Child(){
        cout<<"Consturctor of child\n";
    }
    ~Child(){
        cout<<"Destructor of child\n";
    }
};

int main(){
    Child a1;
    return 0;
}

