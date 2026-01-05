#include<iostream>
using namespace std;

bool checkSpy(int n){
    int sum=0,mul = 1;
    int rem;
    while(n > 0){
        rem = n % 10;
        sum += rem;
        mul *= rem;
        n = n / 10;
    }
    if(sum == mul) return true;
    else return false;
}

int main(){
    int num;
    cout<<"Enter an number :";
    cin>>num;

    if(checkSpy(num)){
        cout<<"Spy Number : "<<num<<endl;
    } else{
        cout<<"Not an spy Number : "<<num<<endl;
    }
}