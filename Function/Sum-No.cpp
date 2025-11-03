#include<iostream>
using namespace std;

int sumOfDigit(int n){
    int temp = n,r=0,sum=0;
    while(n>0)
    {
        r = n % 10;
        sum+=r;
        n = n / 10;
    }
    cout<<"Sum of Digit : " <<sum <<endl;
}

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    sumOfDigit(n);
    return 0;
}