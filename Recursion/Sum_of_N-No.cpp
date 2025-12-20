#include<iostream>
using namespace std;

int sum(int n){
    int s = 0;
    if(n == 1){
        return 1; 
    }
    s += n + sum(n-1);
    return s;
}

int main(){
    int n=10;
    cout<<sum(n);
}