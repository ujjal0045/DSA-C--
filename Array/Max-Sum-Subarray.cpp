#include<iostream>
using namespace std;

void subarray(int arr[],int n){
    int maxSum = INT16_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            cout<<sum <<" ";
            maxSum = max(maxSum,sum);
        }
        cout<<endl;
    }
    cout<<endl <<endl;
    cout<<"Maximum Subarray sum : "<<maxSum <<endl;
}

//Kadane's Algorithm (DP)
void subarray2(int arr[],int n){
    int maxSum = INT16_MIN;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        maxSum = max(maxSum,sum);
        if(sum < 0){
            sum = 0;
        }
    }
    cout<<"Maximum Subarray of sum : " <<maxSum <<endl;
}


int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr) / sizeof(int);

    subarray2(arr,n);
}