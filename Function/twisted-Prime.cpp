#include<iostream>
using namespace std;

int reverse(int num){
    int rev=0,rem;
    while(num > 0){
        rem = num % 10;
        rev = (rev*10) + rem;
        num /= 10; 
    }
    return rev;
}

bool checkPrime(int num){
    for(int i=2;i*i <= num;i++){
        if(num % i == 0){
            return false;
        }
    }
    int n = reverse(num);
    checkPrime(n);
    return true;
}   

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    if(checkPrime(num)){
        cout<<"Twisted Prime..."<<endl;
    } else {
        cout<<"Not an Twisted prime.."<<endl;
    }

}