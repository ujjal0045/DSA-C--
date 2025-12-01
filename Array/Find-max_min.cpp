#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,50,12,16,2};
    int n = sizeof(arr) / sizeof(int);
    int minVal = INT16_MAX;
    int maxVal = INT16_MIN;
    for(int i=0;i<n;i++){
        minVal = min(minVal,arr[i]);
        maxVal = max(maxVal,arr[i]);
    }
    cout<<"Maximum = " <<maxVal <<endl <<"Minimum = " <<minVal <<endl;
}