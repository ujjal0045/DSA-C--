#include<iostream>
using namespace std;

void func(int mat[][4], int n, int m){ // (int (*mat)[4],int n,int m)
    // cout<<"0th row ptr : "<<mat <<endl;
    // cout<<"1th row ptr : "<<mat+1 << endl;
    // cout<<"2nd row ptr : "<<mat+2 <<endl;

    // Print value using ptr
    cout<<"Print the matrix value : "<< *(*(mat+2)+2) <<endl;
}

int main(){
    int arr[4][4] = {{1,2,3,4}
                        ,{5,6,7,8}
                        ,{9,10,11,12}
                        ,{13,14,15,16}};
    // cout<<arr <<endl; // arr[0][0]
    // cout<<arr+1 <<endl; // arr[1][0]
    // cout<<arr+2<<endl; //arr[2][0]

    func(arr,4,4);
}