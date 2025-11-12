#include<iostream>
using namespace std;
int main(){
    int n = 5,i,j,k;
    for(i=1;i<=n;i++){
        for(k=1;k<=(n-i);k++){
            cout<<" " <<" ";
        }
        for(j=1;j<n;j++){
            cout<<"*" <<" ";
        }
        cout<<endl;
    }
}