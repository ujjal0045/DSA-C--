#include<iostream>
using namespace std;

void countSort(int *arr,int n){
    int freq[100000];
    int minVal = INT16_MAX, maxVal=INT16_MIN;
    for(int i=0;i<n;i++){
        minVal = min(minVal,arr[i]);
        maxVal= max(maxVal,arr[i]);
    }
    // 1st Step
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    // 2nd step
    for(int i=minVal,j=n-1;i<=maxVal;i++){
        while(freq[i] > 0){
            arr[j--] = i;
            freq[i]--;
        }
    }
}

int main(){
    int arr[] = {3,6,2,1,8,7,4,5,3,1};
    int n = sizeof(arr) / sizeof(int);

    countSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl;
}