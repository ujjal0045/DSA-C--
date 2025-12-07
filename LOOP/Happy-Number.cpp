#include<iostream>
using namespace std;
int main(){
    long num,sum;
    int r;
    cout<<"Enter the number: ";
    cin>>num;

    while(num != 1 && num != 4){
        while(num != 0){
            r = num % 10;
            sum+= r* r;
            num/=10;
        }
        num = sum;
        sum = 0;
    }
    if(num == 1){
        cout<<"Happy Number";
    } else {
        cout<<"Not an happy numeber";
    }
}