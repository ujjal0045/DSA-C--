#include<iostream>
using namespace std;

void trappedWater(int bar[],int n){
    int leftMax[20000],rightMax[20000];
    leftMax[0] = bar[0];

    // Here we find all left bar
    for(int i=1;i<n;i++){
        leftMax[i] = max(leftMax[i-1],bar[i-1]);
        
    }
    

    // Here we find all right bar
    rightMax[n-1] = bar[n-1]; 
    for(int i=n-2;i>=0;i--){
        rightMax[i] = max(rightMax[i+1],bar[i+1]);
        
    }

    // Water trapped
    int waterTrapped = 0;
    for(int i=0;i<n;i++){
        int curWater = min(leftMax[i],rightMax[i]) - bar[i];
        if(curWater > 0) {
            waterTrapped+= curWater;
        }
    }
    cout<<"Total water trapped : "<<waterTrapped <<endl;
    // return waterTrapped;
}

int main(){
    int bar[] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(bar) / sizeof(int);
    trappedWater(bar,n);
}