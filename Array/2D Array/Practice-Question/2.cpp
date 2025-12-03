#include<iostream>
using namespace std;

int sumArr(int arr[][3],int n,int m){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[1][i];
    }
    cout<<"Sum: "<<sum <<endl;
}

int main(){
    int arr[3][3] = {{1,4,9},{11,4,3},{2,2,3}};
    sumArr(arr,3,3);
}