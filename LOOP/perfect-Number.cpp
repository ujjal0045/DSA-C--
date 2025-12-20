#include<iostream>
using namespace std;
// brute force Method
bool isPerfect(int num){
    long long sum=0,temp = num;
    for(int i=1;i<num;i++){
        if(num % i == 0){
            sum += i;
        }
    }
    if(sum == temp) return true;
    else return false;
}

//Optimal Method


int main(){
    int num ;
    cin>>num;

    if(isPerfect(num)){
        cout<<"Perfect Number : "<<num<<endl;
    } else {
        cout<<"Not Perfect Number : "<<num <<endl;
    }
}