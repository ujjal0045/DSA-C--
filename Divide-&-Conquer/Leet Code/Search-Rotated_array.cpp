#include<iostream>
using namespace std;

int search(int arr[],int st,int end,int tar){
    if(st>end) return -1;

    int mid= (st+end)/2;

    if(arr[mid] == tar){
        return mid;
    }
    if(arr[st] <= arr[mid]){ //L1
        if(arr[st] <= tar && tar <= arr[mid]){
            // left half
            return search(arr,st,mid-1,tar);
        }else{
            //right half
            return search(arr,mid+1,end,tar);
        }
    } else{
        if(arr[mid]<= tar && tar <= arr[end]){
            //right half
            return search(arr,mid+1,end,tar);
        }
        else{
            // left half
            return search(arr,st,mid-1,tar);
        }
    }
}

int main(){
    int arr[] = {4,5,6,7,0,1,2};
    int n = sizeof(arr) / sizeof(int);

    cout<<search(arr,0,n-1,0);
    return 0;
}