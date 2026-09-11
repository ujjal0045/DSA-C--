#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

void reverseString(string s){
    int n = s.length();
    string data="";
    data.reserve(n);
    for(int i=n-1;i>=0;i--){
        data += s.at(i);
    }
    cout<<"Reverse data: "<<data<<endl;
}

int main() {
    string st1 ="";
    cout<<"Enter the data: ";
    cin>>st1;
    reverseString(st1);
    return 0;
}