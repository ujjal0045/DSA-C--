#include <iostream>
#include <algorithm>
using namespace std;

void printArr(int nums[],int n){
    for(int i=0;i<n;i++){
        cout<<nums[i] <<" ";
    }
    cout<<endl;
}

void bubbleSort(int arr[],int n){
    // Bubble Sorting 
    bool isSwap = false;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
                isSwap= true;
            }
        }
        if(!isSwap){
            cout<<"It is already sorted..." <<endl;
            printArr(arr,n);
            return;
        }
    }
    printArr(arr,n);
}

int main() {
    int arr []= {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);
    bubbleSort(arr,n);
    return 0;
}
