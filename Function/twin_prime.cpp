#include<iostream>
using namespace std;

bool CheckPrime(int n){
    if(n<2) return false;

    for(int i=2;i*i<=n;i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;

    if(CheckPrime(a)&&CheckPrime(b) && abs(a-b) == 2){
        cout<<"Twin Prime....";
    }
    else {
        cout<<"Not twin prime....";
    }
}