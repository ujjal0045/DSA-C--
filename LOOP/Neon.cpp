#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long num,temp,sq;
    int r,s=0;

    cout<<"Enter the number : ";
    cin>>num;
    sq = pow(num,2);
    temp = sq;
    while(temp != 0){
        r = temp % 10;
        s+=r;
        temp/=10;
    }
    if(num == s){
        cout<<"Neon Number "<< num <<endl;
    } else{
        cout<<"Not an Neon Number ..";
    }
}