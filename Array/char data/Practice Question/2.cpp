#include<iostream>
#include<cstring>
using namespace std;

void toReverse(char *word,int n){
    int st=0,end=n-1;
    while(st<end){
        swap(word[st],word[end]);
        st++;
        end--;
    }
}

int main()
{
    char word[] = "Code";
    cout<<word<<endl;
    toReverse(word,strlen(word)); 
    cout<<word <<endl;
}