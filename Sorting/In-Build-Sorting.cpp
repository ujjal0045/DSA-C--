#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {4,54,4,6,3,1,343,534};
    int arr2[] = {4,54,4,6,3,1,343,534};
    int n = sizeof(arr) / sizeof(int);

    sort(arr,arr+n); // sorting with a single line
    for(int i=0;i<n;i++){
        cout<<arr[i] <<" ";
    }
    cout<<"Desending order.." <<endl;
    sort(arr2,arr2+n,greater<int>());
    for(int i=0;i<n;i++){
        cout<<arr2[i] <<" ";
    }
}