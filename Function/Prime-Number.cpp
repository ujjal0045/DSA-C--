#include<iostream>
using namespace std;

bool isPrime(int num){
    bool flag=true;
    if(num<2){
        return false;
    }
    for(int i=2;i*i<=num;i++){
        if(num % i == 0){
            return false;
            break;
        }
    }
    return true;
}

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if(isPrime(num)){
        cout<<"Prime Number";
    } else{
        cout<<"Not an Prime Number";
    }
    return 0;
}