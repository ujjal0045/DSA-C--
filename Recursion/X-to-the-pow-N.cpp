#include<iostream>
#include<math.h>
using namespace std;
// O(n)
int findPower(int x,int n){
    if(n == 0){
        return 1;
    }
    return x * findPower(x,n-1);
}

//O(logN) -> by apna college 
int findPower2(int x,int n){
    if(n == 0){
        return 1;
    }
    int halfPow = pow(x,n/2);
    int halfPowSquare = halfPow * halfPow;

    if(n % 2!= 0){
        // odd
        return x * halfPowSquare;
    }
    return halfPowSquare;
}
int main(){
    int x=2,n=5;

    cout<<findPower2(x,n);
}