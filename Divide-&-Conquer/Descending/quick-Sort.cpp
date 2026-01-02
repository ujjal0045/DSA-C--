#include<iostream>
using namespace std;

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl;
}

int partition(int *arr,int st,int end){
    int pivotIdx = end;
    int i=st-1;
    
    for(int j=st;j<end;j++){
        if(arr[j] >= arr[pivotIdx]){
            swap(arr[++i],arr[j]);
        }
    }
    swap(arr[++i],arr[pivotIdx]);
    return i;
}

void quickSort(int arr[],int st,int end){
    if(st>=end) return;

    int pivotIdx = partition(arr,st,end);

    //left half
    quickSort(arr,st,pivotIdx-1);
    // Right Half
    quickSort(arr,pivotIdx+1,end);
}

int main(){
    int arr[] = {6,3,7,5,2,4};
    int n = sizeof(arr) / sizeof(int);

    quickSort(arr,0,n-1);
    printArr(arr,n);
}