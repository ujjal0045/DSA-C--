#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;
    cout<<&a <<endl;
    cout<<*ptr <<endl;   // Print the data of a address

    // Second way to change data of using pointer
    *ptr = 20;
    cout<<a<<endl;
}