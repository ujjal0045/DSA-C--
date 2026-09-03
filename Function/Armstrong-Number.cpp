#include<iostream>
#include<cmath>
using namespace std;


int countNumber(long long n){
    if(n == 0){
        return 1;
    }
    int c = 0;
    while(n != 0){
        n = n / 10;
        c++;
    }
    return c;
}

bool isArmstrong(long long n){
    int temp=n,r,sum=0;
    int c = countNumber(n);
    while(n > 0){
        r = n % 10;
        sum += pow(r,c);
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