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
        
        Car(Car &original){
            cout<<"Copying... "<<endl;
            name = original.name;
            color = original.color;
            mileage = new int;
            *mileage = *original.mileage;
        }

        // Create destructor to delete dynamic allocated 
        ~Car() {
            cout<<"Deleting object..!"<<endl;
            if(mileage != NULL){
                delete mileage;
                mileage =NULL;
            }
        }
};

int main(){
    Car c1("Maruti 800","Blue");
   
    cout<<c1.name<<endl;
    cout<<c1.color<<endl;
    cout<<*c1.mileage<<endl;
    return 0;
}