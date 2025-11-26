#include<iostream>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i] <<" " ;
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);
    int st=0,en=n-1;
    while(st<=en){
        // swap with two method :-
        // int temp = arr[st];
        // arr[st] = arr[en];
        // arr[en] = temp;
        // 2nd method 
        swap(arr[st], arr[en]);
        st++;
        en--;
    }
    printArr(arr,n);
    return 0;
}