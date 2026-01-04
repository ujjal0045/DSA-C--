#include<iostream>
using namespace std;


bool checkSpecial(int num){
    int digit = 0,temp=num;
    int sumOfDigit = 0;
    while(num != 0){
        digit = num % 10;
        int fact = 1;
        for(int i=1;i<=digit;i++){
            fact *= i;
        }
        sumOfDigit += fact;
        num /= 10;
    }
    if(sumOfDigit == temp){
        return true;
    } else{
        return false;
    }
}


int main(){
    int num;
    cout<<"Enter an Unique Number : ";
    cin>>num;

    if(checkSpecial(num)){
        cout<<"Special Number...";
    } else{
        cout<<"Not a Special number";
    }

}