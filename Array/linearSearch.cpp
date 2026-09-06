#include <iostream>
using namespace std;

void performLinearSearch(int arr[],int size){
    int se; // search element
    cout<<"enter the search value: ";
    cin>>se;
    int idx=-1;
    for(int i=0;i<size;i++){
        if(se == arr[i]){
            idx = i;
        }
    }
    if(idx == -1){
        cout<<"The search element or value is not exist"<<endl;
    } else{
        cout<<"Position: "<<idx<<endl;
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
    performLinearSearch(arr,size);
    return 0;
}