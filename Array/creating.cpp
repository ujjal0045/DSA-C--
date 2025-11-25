#include<iostream>
using namespace std;

int main(){
    // int marks[50]; // 0 to 49
    // int no[] = {1,2,3}; // 0 to 2
    // cout<< marks[20] <<endl;

    int arr[5] = {1,2,3,4,5};
    int len = sizeof(arr) / sizeof(int);

    for(int i=0;i<len;i++){
        cout<< arr[i] <<" ";
    }
}