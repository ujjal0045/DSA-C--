#include<iostream>
#include<string>
using namespace std;

class Print{
public:
    void show(int n){
        cout<<"Int : "<<n<<endl;
    }
    void show(string s){
        cout<<"String : "<<s<<endl;
    }
};

int main(){ 
    Print o1;
    o1.show(25);
    o1.show("Ujjwal Burnwal");
}