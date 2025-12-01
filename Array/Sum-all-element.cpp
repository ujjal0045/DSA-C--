#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr) / sizeof(int);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"Sum of all Element : " <<sum <<endl;
}