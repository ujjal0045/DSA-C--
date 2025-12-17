#include<iostream>
#include<string>
using namespace std;

class Animal{
public:
    void eat(){
        cout<<"Eat"<<endl;
    }
    void breathe(){
        cout<<"breathe"<<endl;
    }
};

class Bird :  public Animal{
public:
    void fly(){
        cout<<"fly"<<endl;
    }
};

class Fish : public Animal {
public:
    void swim(){
        cout<<"Swim"<<endl;
    }
};

class Mammal : public Animal{
public:
    void walk(){
        cout<<"Walk" <<endl;
    }
};

int main(){
    Bird b1;
    Fish f1;
    Mammal m1;

    b1.fly();
    b1.eat();

    f1.swim();
    f1.eat();

    m1.walk();
    m1.eat();
}