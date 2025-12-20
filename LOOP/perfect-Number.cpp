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
bool checkPerfectNumber(int num) {
    if(num <= 1) return false;
    int sum = 1;        
    for(int i=2;i*i <= num; i++){
        if(num % i == 0){
            sum += i;
            if(i != num / i){
                sum += num/i;
            }
        }
    }
    return sum == num;
}

int main(){
    int num ;
    cin>>num;

    if(isPerfect(num)){
        cout<<"Perfect Number : "<<num<<endl;
    } else {
        cout<<"Not Perfect Number : "<<num <<endl;
    }
}