#include<iostream>
#include<string>
using namespace std;

class Animal{
public: 
    
    void eat(){
        cout<<"Eat\n";
    }
    void breathe(){
        cout<<"Breathing..\n";
    }
};

class Mammal : public Animal{
public:    
    string bloodType;

    Mammal(){
        bloodType = "Warm";
    }
};

class Dog : public Mammal{
public:
    void tailWag(){
        cout<<" A Dog it's tail" <<endl;
    }
};

int main(){
    Dog d1;

    d1.tailWag();
    cout<<d1.bloodType <<endl;
    d1.eat();
    d1.breathe();
}