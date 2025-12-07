#include<iostream>
#include<string>
using namespace std;

int count(string s){
    int c =0;
    for(int i=0;i<s.length();i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            c++;
        }
    }
    return c;
}

int main(){
    string s;
    getline(cin,s);
    cout<<"Total count of vowel is : "<< count(s) <<endl;
}