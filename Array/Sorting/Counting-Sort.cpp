#include<iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i] <<" " <<",";
    }
}

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
    for(int i=minVal,j=0;i<=maxVal;i++){
        while(freq[i] > 0){
            arr[j++] = i;
            freq[i]--;
        }
    }


    print(arr,n);
}

int main(){
    int arr[] = {1,4,1,3,2,4,3,7};
    int n = sizeof(arr) / sizeof(int);

    countSort(arr,n);

}