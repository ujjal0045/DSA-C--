#include<iostream>
using namespace std;

void diagonalSum(int arr[][3],int n){

    // this logic from me

    // int SumR = 0 ,SumL = 0,common = 0;
    // //Left
    // for(int i=0,j=c-1;i<r;i++){
    //     if( i == j) common = arr[i][j];
    //     SumR+=arr[i][i];
    //     SumL+= arr[i][j];
    //     j--;
    // }
    // cout<<"Right sum : "<<SumR <<endl;
    // cout<<"Left Sum : "<<SumL <<endl;
    // int sum = (SumL + SumR) - common;
    // cout<<"Diagonal Sum is =  "<<sum <<endl;


    // 2nd and more efficient logic
    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i][i];            // Primary diagonal
        if(i != n-1-i){
            sum += arr[i][n-1-i];    // Secondary diagonal
        }
    }
    cout<<"Diagonal Sum : " <<sum <<endl;
}


int main(){
    int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    // diagonalSum(arr,4,4);
    int arr2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    diagonalSum(arr2,3);
}