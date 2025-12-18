#include<iostream>
#include<string>
using namespace std;

class Parent{
public:
    virtual void print(){
        cout<<"Base\n";
    }
};

class Child : public Parent{
public:
    void print() override{
        cout<<"Child\n";
    }
};

int main(){
    Child *b = new Child();
    b->print();
    delete b;
    return 0;
}

