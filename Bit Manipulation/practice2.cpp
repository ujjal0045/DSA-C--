#include<iostream>
using namespace std;

void update(int num,int i){
    int bitMask = ~0 << i;
    num = num & bitMask;
    cout<<num;
}

int main(){
    update(15,2);

}