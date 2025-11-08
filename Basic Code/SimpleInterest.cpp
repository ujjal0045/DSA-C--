#include<iostream>

using namespace std;

int main()
{
    int p,r,t;
    cout<<"Enter the Amount: ";
    cin>>p;
    cout<<"Enter the interest: ";
    cin>>r;
    cout<<"Enter the time: ";
    cin>>t;

    cout<<"Simple interest is: " <<(p*r*t) / 100; 
}