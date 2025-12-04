#include<iostream>
using namespace std;

void transpose(int arr[][3],int r,int c){
    int CopyArr[c][r];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            CopyArr[j][i] = arr[i][j];
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<CopyArr[i][j]<<" , ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[2][3] = {{10,20,30},{100,200,300}};
    transpose(arr,2,3);
}