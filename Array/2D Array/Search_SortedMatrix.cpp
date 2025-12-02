#include<iostream>
using namespace std;

// Third stair case method
int stairCase(int mat[4][4],int n,int m,int key){
    int r=0,c=m-1;
    while(r<n && c>=0){
        if(mat[r][c]== key){
            cout<<"Cell Found : (" << r <<","<<c<<")"<<endl;
            return true;
        } else if(mat[r][c] < key){
            r++; //Down
        } else{
            c--; // Left
        }
    }
    return false;
}


int Binarysearch(int arr[][4],int n,int m,int key){
    // Using Binary Search Algo
    int st=0,mid=0,end=n-1;
    for(int i=0;i<n;i++){
        while(st<=end){
            mid = (st+end) / 2;
            if(arr[i][mid] == key){
                return true;
            } else if(arr[i][mid] < key){
                st = mid+1;
            } else{
                end = mid -1;
            }
        }
        st=mid=0;
        end = n-1;
    }
    return false;

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(arr[i][j] == key)
    //             return true;
    //     }
    // }
    // return false;
}

int main(){
    int arr[4][4] = {{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    if(stairCase(arr,4,4,50)){
        cout<<"Completed" <<endl;
    } else {
        cout<<"Not Found"<<endl;
    }
}