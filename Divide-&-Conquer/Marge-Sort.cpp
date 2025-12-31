#include<iostream>
#include<vector>
using namespace std;

void marge(int arr[],int st,int mid,int end){
    vector <int> temp;
    int i = st;
    int j = mid+1;

    while(i <= mid && j <= end){
        // If i is less than j then print in i and +1
        if( arr[i] <= arr[j]){
            temp.push_back(arr[i++]);
        }
        // when i is not less than j then print in j and +1
        else{
            temp.push_back(arr[j++]);
        }
    }
    while(i<=mid){
        temp.push_back(arr[i++]);
    }

    while(j<=end){
        temp.push_back(arr[j++]);
    }
    // Copy element 
    for(int i=st,x=0;i<=end;i++){
        arr[i] = temp[x++];
    }
}

void margeSort(int arr[],int st,int end){ // "O(Nlogn)"
    //base case
    if(st >= end){
        return;
    }
    int mid = (st + end) /2;
    margeSort(arr,st,mid); // left
    margeSort(arr,mid+1,end); // right

    marge(arr,st,mid,end);//conquer
}

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
}

int main(){
    int arr[] = {6,3,7,5,2,4};
    int n= sizeof(arr) / sizeof(int);

    margeSort(arr,0,n);


    printArr(arr,n);
}