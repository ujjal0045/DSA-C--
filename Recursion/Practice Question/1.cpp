#include<iostream>
using namespace std;

int BinarySea(int arr[],int st,int end,int key){
    if(st > end){
        return -1;
    }
    int mid = (st+end) / 2;
    if(arr[mid] == key){
        return mid;
    }
    else if(arr[mid] < key){
        BinarySea(arr,mid+1,end,key);
    }
    else {
        BinarySea(arr,st,mid-1,key);
    }
}

int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int key = 5;
    int st = 0, end = sizeof(arr) / sizeof(int);
    cout<<BinarySea(arr,st,end,key);
}