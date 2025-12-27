#include<iostream>
using namespace std;

void BinarySea(int arr[],int size,int idx,int key){
    if(idx == size){ 
        cout<<"-1";
        return;
    }
    if(arr[idx] == key){
        cout<<"Index : "<<idx<<endl;
        return;
    }
    BinarySea(arr,size,idx+1,key);
}

int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int key = 5;
    BinarySea(arr,7,0,key);
}