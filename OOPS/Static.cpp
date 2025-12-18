#include<iostream>
#include<string>
using namespace std;

class Example{
public:
    Example(){
        cout<<"Constructor...\n";
    }

    ~Example(){
        cout<<"Destructor...\n";
    }
};

int main(){
    int a = 0;
    // Example 1
    
    if(a==0){
        static Example c1;
        // Example c2 - output : constructor -> destructor -> code ending
    }
    cout<<"code ending...\n";
}