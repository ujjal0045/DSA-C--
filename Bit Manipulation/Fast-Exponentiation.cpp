#include<iostream>
using namespace std;

void FastExpo(int x,int n){
    int ans=1;
    while(n>0){
        int lastDig = n & 1;
        if(lastDig) // if it is positive than run the condition
            ans *= x;
        x *= x;
        n = n >> 1; 
    }
    cout<<ans<<endl;
}

int main(){
    FastExpo(3,5);
    FastExpo(2,2);
}