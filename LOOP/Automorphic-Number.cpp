#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long num,temp;
    long long sq;
    long long div=1,rem;
    int c=0;
    cout<<"Enter the number: ";
    cin>>num;

    temp=num;
    sq = num * num;
    while(num!=0){
        c++;
        num/=10;
    }

    for(int i=0;i<c; i++) {
        div*=10;
    }

    rem = sq % div;

    if(temp == rem)
        cout<<"Automorphic number";
    else
        cout<<"Not an Automorphic number";
}
