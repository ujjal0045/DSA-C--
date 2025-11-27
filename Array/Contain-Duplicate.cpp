#include<iostream>
using namespace std;

bool ContainsDuplicate(int nums[],int numSize){
    for(int i=0;i<numSize;i++){
        for(int j=i+1;j<numSize;j++){
            if(nums[i] == nums[j]){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[]= {1,2,3,1};
    int n = sizeof(arr) / sizeof(int);
    cout<< ContainsDuplicate(arr,n);
}