#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){
    char ch[50] = {'c','o','d','e','\0'};
    cout<<ch <<endl;
    cout <<"Array lenght : " <<strlen(ch) <<endl;
    for(int i=0;i<5;i++){
        cout<< ch[i] <<" ";
    }
}