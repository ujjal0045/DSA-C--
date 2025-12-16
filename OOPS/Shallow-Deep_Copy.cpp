#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
        string name;
        string color;
        int *mileage;

        // Constructor with parameters
        Car(string name,string color){
            this->name = name;
            this->color = color;
            mileage = new int; // Dynamic allocation
            *mileage = 12;
        }
        //Shallow don't need to make custom constructor
        // Custom Copy constructor for Deep copy 
        Car(Car &original){
            cout<<"Copying... "<<endl;
            name = original.name;
            color = original.color;
            mileage = new int;
            *mileage = *original.mileage;
        }
};

int main(){
    Car c1("Maruti 800","Blue");
    
    Car c2(c1);
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    cout<<*c2.mileage<<endl;
    *c2.mileage = 10;

    cout<<*c1.mileage<<endl;
}