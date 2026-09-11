#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

void words(string &s){
    string word="";
    int n = s.length();
    for(int i=0;i<n;i++){
        if(s[i] == ' '){
            cout<<word<<endl;
            word="";
        } else{
            char temp = s[i];
            word += temp;
        }
    }
    cout<<word<<endl;
}

int main() {
    string st1 ="";
    cout<<"ENter string: ";
    // this way we can access all the word instead of taking one word
    getline(cin, st1);
    words(st1);
    return 0;
}