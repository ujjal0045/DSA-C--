#include<iostream>
using namespace std;

void arrFunc(int arr[]) {
    arr[0] = 1000;
    arr[1] = 2000;
    arr[2] = 3000;
    arr[3] = 4000;

}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);
    arrFunc(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i] <<endl;
    }
}