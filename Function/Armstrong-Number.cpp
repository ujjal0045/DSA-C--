#include<iostream>
using namespace std;

bool isArmstrong(long long n){
    int temp=n,r,sum=0;
    while(n > 0){
        r = n % 10;
        sum += (r*r*r);
        n /= 10; 
    }
    if(temp == sum){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    long long num;
    cout<<"Enter the Number : ";
    cin>>num;

    if(isArmstrong(num)){
        cout<<"Armstrong Number";
    } else {
        cout<<"Not an Armstrong NUmber";
    }
}