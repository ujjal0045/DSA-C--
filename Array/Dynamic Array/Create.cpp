#include<iostream>
using namespace std;

int main(){
    int size;
    cin>>size;

    // Dynamic array
    int *arr = new int[size];
    for(int i=0;i<size;i++){
        arr[i] = i;
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    delete  [] arr; //free
}