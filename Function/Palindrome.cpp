#include<iostream>
using namespace std;

bool palin(int n){
    int temp = n,r=0,sum=0;
    while(n>0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
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
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    if(palin(n))
        cout<<"Palindrom Number";
    else
        cout<<"Not";
}
