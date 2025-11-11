#include<iostream>
using namespace std;
int main()
{
    long long a,b,max,min,r,gcd;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;

    if(a>b){
        max = a;
        min = b;
    } else{
        max = b;
        min = a;
    }
    while(min != 0){
        r = max % min;
        
        max = min;
        min = r;
    }
    gcd = max;

    // for(int i=1;i<=a && i<=b; i++){
    //     if(a%i==0 && b % i == 0){
    //         gcd = i;
    //     }
    // }
    cout<<"GCD : " <<gcd <<endl;
}