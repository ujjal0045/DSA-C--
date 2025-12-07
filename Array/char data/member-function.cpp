#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "Hello World";
    cout<<"length : " <<s.length() <<"Size : "<<s.size()<<endl;
    cout<<"Index : "<<s.substr(2,5)<<endl;
    cout<<"Find : "<<s.find("World") <<endl;
}