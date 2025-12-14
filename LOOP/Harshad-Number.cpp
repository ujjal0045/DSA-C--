#include<iostream>
using namespace std;

int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0;
        int temp = x;
        while(temp > 0){
            int digit = temp % 10;
            sum += digit;
            temp /= 10;
        }
        if(x % sum == 0){
            cout<<sum <<endl;
        } else {
            cout<<-1;
        }
}

int main(){
    long long num;
    cout<<" Enter any number : ";
    cin>>num;
    sumOfTheDigitsOfHarshadNumber(num);

}