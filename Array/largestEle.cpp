#include <iostream>
#include<algorithm>
using namespace std;

void findLargestEle(int arr[],int size){
    int lar = arr[0];
    int lar1 = arr[0];
    for(int i=0;i<size;i++){
        lar = max(lar,arr[i]); // use in-build function
        if(lar1<arr[i]){
            lar1 = arr[i];
        }
    }
    cout<<"Largest element : "<<lar<<endl;
    cout<<"Largest element : "<<lar1<<endl;
}

void displayArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<"Element "<<i<<" :"<<arr[i]<<endl;
    }
}

void storeEle(int arr[],int size){
    for(int i=0;i<size;i++){
        int value;
        cout<<"Enter the value: ";
        cin>>value;
        arr[i]=value;
    }
}

int main() {
    int size;
    cout<<"Enter the size of a array: ";
    cin>>size;
    int arr[size];
    storeEle(arr,size);
    displayArray(arr,size);
    findLargestEle(arr,size);
    return 0;
}