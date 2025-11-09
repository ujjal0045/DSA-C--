#include<iostream>
using namespace std;
int main()
{
    long long num;
    int rem,flag=false;
    cout<<"Enter the number: ";
    cin>>num;

    while(num>=0){
        rem=num%10;
        if(rem == 0){
            flag=true;
            break;
        }
        num=num/10;
    }
    if(flag==true)
        cout<<"Duck Number";
    else
        cout<<"Not an Duck number";
}
