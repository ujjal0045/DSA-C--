#include<iostream>
#include<cstring>
using namespace std;

int main(){
    // char ch[50];
    // cin>> ch;
    // cout<<"Your word was : "<<ch <<endl;
    // cout<<"lenght : "<< strlen(ch) <<endl;

    char work[50];
    cin.getline(work,50);
    cout<<"Your word was : "<< work <<endl;
    cout<<"Lenght : "<<strlen(work) <<endl;
}