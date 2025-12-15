#include<iostream>
#include<string>
using namespace std;

class Car{
    string name;
    string color;
public:
    Car(){
        cout<<"Constructor without parameter..."<<endl;
    }
    Car(string name, string color){ // This is constructor(automatically created by complier)
        cout<<"Constructor with parameter"<<endl;
        this->name=name;
        this->color = color;
        // *this.color = color; we can also write like this as a 2nd way
    }

    void start(){
        cout<<"Car has starting..."<<endl;
    }
    void stop(){
        cout<<"Car has stopped..." <<endl;
    }

    string getName(){
        return name;
    }
    string getColor(){
        return color;
    }
};

int main(){
    Car c0; // Non parameter constructor
    Car c1("Maruti 600","Cream-White"); // With parameter

    cout<<"Car Name : "<<c1.getName()<<endl;
    cout<<"Car Color : "<<c1.getColor()<<endl;

}