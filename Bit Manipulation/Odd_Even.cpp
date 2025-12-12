#include<iostream>
using namespace std;

void CheckOdd(int n){
    if( (n & 1) == 0) cout<<"Even number" <<endl;
    else cout<<"Odd" <<endl;
}

int main(){
    int n;
    cin>>n;
    CheckOdd(n);
    return 0;
}