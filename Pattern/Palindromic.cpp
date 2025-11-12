#include<iostream>
using namespace std;
int main(){
    int n=5,i,j,k;
    for(i=1;i<=5;i++){
        // Spaces
        for(k=1;k<=n-i;k++){
            cout<<" " << " ";
        }
        // Number Forward
        for(j=i;j>=1;j--){
            cout<<j <<" ";
        }
        // Number sequence
        for(j=2;j<=i;j++){
            cout<<j <<" ";
        }
        cout<<endl;
    }
}