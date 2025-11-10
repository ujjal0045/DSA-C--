#include<iostream>
using namespace std;
int main()
{
    long long num,sum=0;
    int rem;

    cout<<"Enter the number: ";
    cin>>num;

    while(num!=0){
        rem = num % 10;
        if(rem%2==1){
            sum+=rem;
        }
        num /=10;
    }
    cout<<"Sum of ODD digit : " <<sum <<endl;
}