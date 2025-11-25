#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int n = sizeof(arr) / sizeof(int);
    cout<<"Enter Array Element: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    cout<<endl <<"Smallest Number: "<<min <<endl;
}