#include<iostream>
using namespace std;

bool linear(int arr[],int size,int key){ // (int *arr,int size,int key)
    bool flag = false;
    for(int i=0;i<size;i++){
        if(arr[i] == key){
            flag = true;
            break;
        }
    }
    return flag;
}

int main()
{
    int arr[8] = {2,4,6,8,10,12,14,16};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cout<<"Enter the key value: ";
    cin>>key;
    if(linear(arr,n,key)){
        cout<<"Founded the key Value : " <<key <<endl;
    } else{
        cout<<"Not Founded the key Value : "<<key << endl;
    }
}
