#include<iostream>
#include<string>
using namespace std;

class Parent{
public:
    void show(){
        cout<<"Parent class Is visible.."<<endl;
    }
};
class Child : public Parent{
public:
    void show(){
        cout<<"Child class is visible.."<<endl;
    }
};

int main(){
    Child c1;
    // It always called the class the child
    c1.show();
}