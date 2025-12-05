#include<iostream>
#include<algorithm>
using namespace std;

void transpose(int arr[3][3],int n,int m)
{   // use transpose to transpose the matrix
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    // reverse each row
    for(int i=0;i<n;i++){
        reverse(arr[i],arr[i]+m);
    }
    // Print
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j] <<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int n= sizeof(arr) / sizeof(arr[0]);
    int m = sizeof(arr[0]) / sizeof(int);
    transpose(arr,n,m);
}