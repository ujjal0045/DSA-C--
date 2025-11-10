#include<iostream>
using namespace std;
int main()
{
    long long num;
    do{
        cout<<"Enter your number: ";
        cin>>num;
        if(num % 10 == 0){
            break;
        }
        cout<<"Your number: "<<num<<endl;
    } while(1);
}