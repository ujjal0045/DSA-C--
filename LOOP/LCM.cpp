#include<iostream>
using namespace std;

int main()
{
    int a,b,i=1;
    long long result=0;
    cout<<"Enter 1st Number : ";
    cin>>a;
    cout<<"Enter 2nd Number : ";
    cin>>b;
    
    while(1)
    {
        if(i%a==0 && i%b==0){
            result = i;
            break;
        }
        i++;
    }
    cout<<"Lcm : " <<result <<endl;
}