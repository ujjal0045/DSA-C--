#include<iostream>
using namespace std;

int main(){
    int arr[3][4];
    int r=3,c=4;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>> arr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<< arr[i][j] <<" ";
        }
        cout<<endl;
    }
}