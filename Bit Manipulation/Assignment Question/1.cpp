#include<iostream>
using namespace std;

void check(int n,int i,int j){
    int leftBit = (~0) << (j + 1);
    int rightBit = (1 << i) -1;
    int mask = leftBit | rightBit;
    int result = n & mask;
    cout<<result;

}

int main(){
    check(15,1,3);

}