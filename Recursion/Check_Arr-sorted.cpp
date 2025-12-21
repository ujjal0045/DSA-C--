#include<iostream>
using namespace std;

bool checkSorted(int arr[],int n,int i){
    if(n-1== i ) return true;

    if(arr[i] > arr[i+1]){
        return false;
    }
    return checkSorted(arr,n,i+1);
}

int main(){
    int arr[] = {1,2,8,5};
    int arr2[] = {1,2,4,5,6};
    int n = sizeof(arr) / sizeof(int);
    cout<<checkSorted(arr,n,0);
    cout<<checkSorted(arr2,5,0);
}