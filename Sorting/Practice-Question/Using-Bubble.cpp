#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    bool isSwap=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                isSwap= true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(!isSwap){
            cout<<"It is Already swap.." <<endl;
            return;
        }
    }
}

int main(){
    int arr[] ={3,6,2,1,8,7,4,5,3,1};
    int n = sizeof(arr) / sizeof(int);
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i] <<" , ";
    }
    cout<<endl;
}