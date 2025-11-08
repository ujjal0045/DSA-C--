#include<iostream>
using namespace std;
int main()
{
    long long num;
    cout<<"Enter the number: ";
    cin>>num;

    if(num%7 ==0 || num % 10 == 7){
        cout<<"Buzz Number...";
    }
    else{
        cout<<"Not an Buzz number";
    }
}