#include<iostream>
using namespace std;

void subarray(int arr[],int n){
    for(int i=0;i<n;i++){
        int mul=0;
        for(int j=i;j<n;j++){
            mul = (mul*10) + arr[j];
            cout<<mul <<" " <<" , ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);

    subarray(arr,n);
}