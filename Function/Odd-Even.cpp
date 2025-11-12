#include<iostream>
using namespace std;

int oddevenFinder(int a){
    if(a % 2== 0){
        cout<<"Even number";
    } else {
        cout<<"Odd number";
    }
}
int main(){
    int num;
    cout<<"ENter the number: ";
    cin>>num;
    oddevenFinder(num);
    return 0;
}