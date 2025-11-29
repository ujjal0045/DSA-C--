#include<iostream>
using namespace std;

int maxProduct(int* nums, int numsSize) {
    int maxPro = nums[0];
    int mul=1;
    for(int i=0;i<numsSize;i++){
        mul*=nums[i];
        
        maxPro= max(maxPro,mul);
        if(mul == 0) mul = 1;
        }
    mul =1 ;
    for(int i=numsSize-1;i>=0;i--){
        mul*= nums[i];
        maxPro = max(maxPro, mul);
        if(mul == 0) mul = 1;
    }
    
    return maxPro;
}

int main(){
    int arr[] = {3,-1,4};
    int n = sizeof(arr) / sizeof(int);
    cout<<"Maximum product subarray : " << maxProduct(arr,n) <<endl;
}