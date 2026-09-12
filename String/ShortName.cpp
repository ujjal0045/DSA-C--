#include <iostream>
#include<string>
using namespace std;

void doShort(string &s){
    string shortName ="", data="";
    int n = s.length();
    for(int i=0;i<n;i++){
        if(s[i] == ' '){
            shortName += data.at(0);
            shortName += ". ";
            data = "";
        } else{
            char temp = s[i];
            data += temp;
        }
    }
    shortName += data;
    cout<<"Your short name: "<<shortName<<endl;
}

int main() {
    string st1 ="";
    cout<<"ENter string: ";
    // this way we can access all the word instead of taking one word
    getline(cin, st1);
    doShort(st1);
    return 0;
}