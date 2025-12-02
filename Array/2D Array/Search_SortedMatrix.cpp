#include<iostream>
using namespace std;

int search(int arr[][4],int n,int m,int key){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] == key)
                return true;
        }
    }
    return false;
}

int main(){
    int arr[4][4] = {{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    if(search(arr,4,4,2)){
        cout<<"Found" <<endl;
    } else {
        cout<<"Not Found"<<endl;
    }
}