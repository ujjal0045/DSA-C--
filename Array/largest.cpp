#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int n = sizeof(arr) / sizeof(int);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int ans=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] > ans){
            ans = arr[i];
        }
    }

    cout<<endl <<"Largest Number: "<<ans <<endl;
}