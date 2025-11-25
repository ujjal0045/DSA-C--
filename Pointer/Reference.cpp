#include<iostream>
using namespace std;

void changeA(int &b){
    b = 20;
    cout<<b<<endl;
}

int main(){
    int a = 10;
    changeA(a);
    cout<< a <<endl;
    return 0;
}