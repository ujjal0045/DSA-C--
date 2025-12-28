#include<iostream>
#include<string>
using namespace std;

int validSubstr(string s){
    int n = s.size();
    // base case
    if(n==0 || n== 1){
        return n;
    }

    // check it is valid or not
    int count = 0;
    if(s[0] == s[n-1]){
        count++;
    } 

    //remove from last
    count += validSubstr(s.substr(0,n-1));
    // remove from start
    count += validSubstr(s.substr(1));

    // remove same character using both faces
    if(n > 2){
        count -= validSubstr(s.substr(1,n-2));
    }

    return count;
}

int main(){
    string s = "abcab";
    int count = validSubstr(s);
    cout<<count;
}