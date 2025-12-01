#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(int);
    int even = 0, odd = 0;
    for(int i=0;i<n;i++){
        if(arr[i] % 2 == 0){
            even++;
        } else{
            odd++;
        }
    }
    cout<<"Total even count : " <<even <<endl;
    cout<<"Total odd count : "<< odd <<endl;
}