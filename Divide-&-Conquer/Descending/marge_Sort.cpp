#include<iostream>
#include<vector>
using namespace std;



void marge(int arr[],int st,int mid,int end){
    vector<int> temp;

    int i=st;
    int j=mid+1;

    while(i<=mid && j<=end){
        if(arr[i]>= arr[j]){
            temp.push_back(arr[i++]);
        } else{
            temp.push_back(arr[j++]);
        }
    }
    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=end){
        temp.push_back(arr[j++]);
    }
    for(int i=st,x=0;i<=end;i++){
        arr[i] = temp[x++];
    }
}

void margeSort(int arr[],int st,int end){
    if(st >= end) return;

    int mid = (st+end) /2;

    // Left Half
    margeSort(arr,st,mid);
    // Right half
    margeSort(arr,mid+1,end);

    // Conquer
    marge(arr,st,mid,end);
}

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {6,3,7,5,2,4};
    int n = sizeof(arr) / sizeof(int);

    margeSort(arr,0,n-1);
    printArr(arr,n);
}