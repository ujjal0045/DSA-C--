#include<iostream>
using namespace std;

void FindIdx(int arr[],int size,int idx,int key){
    if(idx== size){
        return;
    }
    if(arr[idx] == key){
        cout<<idx<<" - ";
    }
    FindIdx(arr,size,idx+1,key);
}
int main(){
    int arr[] = {3,2,4,5,6,2,7,2};
    int n = sizeof(arr) / sizeof(int);
    int key = 2;
    FindIdx(arr,n,0,key);
}