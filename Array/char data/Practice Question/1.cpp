#include<iostream>
#include<cstring>
using namespace std;

void toUpper(char *word,int n){
    for(int i=0;i<n;i++){
        char ch = word[i];
        if(ch>='A' && ch <='Z') continue;
        else  word[i] = ch - 'a' + 'A';
    }
}

int main(){
    char word[] = "Ujjal";   //{'A','p','P','l','e','\0'};
    cout<<"Before the : "<<word<<endl;
    toUpper(word, strlen(word));
    cout<<word <<endl;
}