#include<iostream>
using namespace std;

bool isBuzz(int n){
    if(n%10==7 || n%7==0){
        return true;
    } else {
        return false;
    }
}

int main()
{
    long long n;
    cout<<"Enter the number :  ";
    cin>>n;

    if(isBuzz(n)){
        cout<<"Buzz Number..";
    } else {
        cout<<"Not an Buzz Number";
    }
}