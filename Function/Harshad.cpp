#include<iostream>
using namespace std;

int isHarshad(int n){
    int r,sum=0;
    while(n!=0){
        r = n % 10;
        sum+=r;
        n /=10;
    }
    return sum;
}

int main(){
    int n;
    cout<<"ENter the number: ";
    cin>>n;
    int sum = isHarshad(n);
    
    if(n % sum == 0) {
        cout<<"Harshad Number.."<<endl;
    } else {
        cout<<"Not an Harshad Number ..." <<endl;
    }
}