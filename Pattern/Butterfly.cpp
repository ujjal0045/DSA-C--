#include<iostream>
using namespace std;
int main(){
    int n=4,i,j,k,m;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"*" <<" ";
        }
        for(k=1;k<=2*(n-i);k++){
            cout<<" " <<" ";
        }
        for(m=1;m<=i;m++){
            cout<<"*" <<" ";
        }
        cout<<endl;
    }
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"*" <<" ";
        }
        for(k=1;k<=2*(n-i);k++){
            cout<<" " <<" ";
        }
        for(m=1;m<=i;m++){
            cout<<"*" <<" ";
        }
        cout<<endl;
    }
}