#include <iostream>
#include<string>
using namespace std;

void printCapitalString(string &s){
    string capitalStr ="", data="";
    for(int i = 0;i<s.length();i++){
        if(s[i] == ' '){
            if(isupper(data.at(0))){
                cout<<data<<endl;
            }
            data="";
        } else{
            char temp = s[i];
            data += temp;
        }
    }
    cout<<data<<endl;
}


// Output:-
// Enter string: Hi i am Ujjal Burnwal
// Hi
// Ujjal
// Burnwal

int main() {
    string st1 ="";
    cout<<"ENter string: ";
    // this way we can access all the word instead of taking one word
    getline(cin, st1);
    printCapitalString(st1);
    return 0;
}
