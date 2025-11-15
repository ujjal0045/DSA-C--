#include<iostream>
using namespace std;

void decToBin(int DecNum){
    long n = DecNum;
    long long binNum=0;
    int mul=0;
    while(n>0){
        int r = n % 2;
        mul = (mul*10) + r; // We get reverse number of binary 
        n/=2;
    }
    n = mul;
    // Then convert into reverse number to find correct binary number
    while(n>0){
        int r = n % 10;
        binNum = (binNum * 10) + r;
        n/=10;
    }
    cout<<"Binary Number : " << binNum <<endl;
}

int main()
{
    int n;
    cout<<"Enter Decimal Number : ";
    cin>>n;
    cout<<"Decimal Number : "<<n << endl;
    decToBin(n);
    return 0;
}