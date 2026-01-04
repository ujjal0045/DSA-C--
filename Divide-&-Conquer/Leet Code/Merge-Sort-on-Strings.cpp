#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printArr(string *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int marge(string arr[],int st,int mid,int end){
    vector<string> temp;
    int i=st;
    int j = mid+1;

    while(i<=mid && j<=end){
        char c1 = arr[i][0],c2 = arr[j][0];
        if(c1 <= c2){
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
        }
    }
    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j <= end){
        temp.push_back(arr[j++]);
    }

    for(int i=st,x=0;i<=end;i++){
        arr[i] = temp[x++];
    }
}

void margeSort(string arr[],int st,int end){
    if(st>=end){
        return;
    }

    int mid = (st+end) / 2;

    //Left 
    margeSort(arr,st,mid);
    // right
    margeSort(arr,mid+1,end);

    // Conquer
    marge(arr,st,mid,end);
}

int main(){
    string arr[] = {"sun","earth","mars","mercury"};

    int n = sizeof(arr) / sizeof(string);

    margeSort(arr,0,n-1);
    printArr(arr,n);
}