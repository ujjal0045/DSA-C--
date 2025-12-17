#include<iostream>
using namespace std;

void count(){
    static int c = 0;
    c++;
    cout<<"Count : "<<c<<endl;
}

int main(){
    count();
    count();
    count();
}