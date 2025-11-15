#include<iostream>
using namespace std;

void binToDec(int binNum){
    long int n = binNum;
    int decNum = 0;
    int pow = 1; // multiple by 2 every increment

    while(n != 0){
        int r = n % 10;
        decNum += r * pow;
        pow = pow * 2;
        n /=10; 
    }
    cout<<"Decimal Number : " <<decNum << endl;
}

int main()
{
    int num;
    cout<<"Enter Binary number : ";
    cin>>num ;
    cout<<"Binary Number  : "<<num <<endl;
    binToDec(num);
    return 0;
}