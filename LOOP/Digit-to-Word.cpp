#include<iostream>
using namespace std;
int main()
{
    long long num,temp;
    int rem=0,rev=0;
    cout<<"Enter the Number : ";
    cin>>num;
    while(num!=0){
        rem= num % 10;
        rev = (rev*10) + rem;
        num/=10;
    }
    cout<<"Word : ";
    num = rev;
    while(num>0){
        rem = num % 10;
        switch (rem)
        {
        case 0:
            cout<<"Zero" <<" ";
            break;
        case 1:
            cout<<"One" <<" ";
            break;
        case 2:
            cout<<"Two" <<" ";
            break;
        case 3:
            cout<<"Three" <<" ";
            break;
        case 4:
            cout<<"Four" <<" ";
            break;
        case 5:
            cout<<"Five" <<" ";
            break;
        case 6:
            cout<<"Six" <<" ";
            break;
        case 7:
            cout<<"Seven" <<" ";
            break;
        case 8:
            cout<<"Eight" <<" ";
            break;
        case 9:
            cout<<"Nine" <<" ";
            break;
        default:
            break;
        }
        num/=10;
    }
}