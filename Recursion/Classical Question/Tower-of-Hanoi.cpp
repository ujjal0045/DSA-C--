#include<iostream>
using namespace std;

void helper(int n,int from,int to,int aux,int &count){
    if(n==0) return;
    helper(n-1,from,to,aux,count);
    count++;
    helper(n-1,aux,to,from,count);
}

int towerOfHonoi(int n,int from,int aux,int to){
    int count = 0;
    helper(n,from,to,aux,count);
    return count;
}

int main(){
    int n =3;
    int from,aux,to;
    cout<<towerOfHonoi(n,from,aux,to);
}