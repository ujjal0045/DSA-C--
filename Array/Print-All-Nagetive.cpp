#include<iostream>
using namespace std;

void allNeg(int *arr,int n){
    cout<<"All Nagetive element are : ";
    for(int i=0;i<n;i++){
        if(arr[i] < 0) {
            cout<<arr[i] <<" ";
        }
    }
    cout<<endl;
}

int main()
{
    int arr[] = {-1,-10,100,5,61,-2,-23,8,-90,51};
    int n = sizeof(arr) / sizeof(int);

    allNeg(arr,n);
    
}