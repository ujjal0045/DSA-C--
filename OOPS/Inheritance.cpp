#include<iostream>
#include<string>
using namespace std;
//parent
class Animal{
public:
    string color;
    void eat(){
        cout<<"Eat\n";
    }
    void breathe(){
        cout<<"Breathing..\n";
    }
};
// Child
class Fish : public Animal{
public:
    int fins;

    void swim(){
        cout<<"Swims"<<endl;
    }
};

int main(){
    Fish f1;
    f1.fins = 3;
    cout<<f1.fins<<endl;
    f1.breathe();
    f1.eat();
    f1.swim();
}