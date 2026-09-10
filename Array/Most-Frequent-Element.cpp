#include <iostream>
using namespace std;
// brute force method
void findMostFreq(int *arr,int n){
    int mostFreq = 0;
    int mostFreqEle;
    for(int i=0;i<n;i++){
        int value = arr[i];
        int count = 1;
        for(int j = i+1;j<n;j++){
            if(value == arr[j]){
                count++;
            }
        }
        if(count > mostFreq){
            mostFreq = count;
            mostFreqEle = arr[i];
        }
    }
    cout<<"Most Frequent ELement: "<<mostFreqEle<<endl;
    cout<<"The highest frequency is "<<mostFreq<<endl;
}

int main() {
    int arr[] = {1,3,2,1,2,2,3,3,3,1};
    findMostFreq(arr,10);
    return 0;
}