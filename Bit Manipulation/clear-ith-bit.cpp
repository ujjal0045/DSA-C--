#include<iostream>
using namespace std;

int clearIthbit(int num,int i){
    int bitMask = ~(1<<i);
    return num & bitMask;
}

int main(){
    cout<< clearIthbit(6,1) <<endl;
}