#include<iostream>
#include<cmath>
using namespace std;

bool isPerfect(long long n){
    
    if(n <=1) return false;
    int sum=1;

    long long limit = (long long)sqrt(n);
    for(int i=2;i<=limit;i++){
        if(n % i == 0){
            sum+=i;
            long long j = n / i;
            if(i != j){
                sum +=j;
            }
        }
    }
    return (n == sum);
}

int main(){
    long long n;
    cout<<"Enter the number : ";
    cin>>n;

    if(isPerfect(n)){
        cout<<"Perfect Number "<<n <<endl;
    } else {
        cout<<"Not an perfect number : " <<n << endl;
    }
}