#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = { -7, 2, 3, 8, 6, 6, 75, 38, 3, 2};
    int n = sizeof(arr) / sizeof(int);

    sort(arr,arr+n,greater<int>());
    cout<<"Second largest number : "<<arr[1] <<endl;
}