#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
        string name;
        string color;

        // Constructor with parameters
        Car(string name,string color){
            this->name = name;
            this->color = color;
        }

        // Custom Copy constructor 
        Car(Car &original){
            cout<<"Copying... "<<endl;
            name = original.name;
            color = original.color;
        }
};

int main(){
    Car c1("Maruti 800","Blue");
    // Copy Constructor
    Car c2(c1);
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
}