#include<iostream>
using namespace std;

int search(int nums[],int numsSize, int target){
    for(int i=0;i<numsSize;i++){
        if(nums[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {4,5,6,7,0,1,2};
    int n = sizeof(arr) / sizeof(int);

    int target = 10;
    cout<< search(arr,n,target) <<endl; 
}