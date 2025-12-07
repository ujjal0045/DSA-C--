#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool check(string s,string t){
    for(int i=0;i<s.length();i++){
        if(s == t){
            cout<<"complete";
            return true;
        }
        for(int j=0;j<t.length();j++){
            if(s[i]==t[j] && s[j] == t[i]){
                swap(t[i],t[j]);
                cout<<i<<" - " <<j;
            }
        }
        
    }
}
bool swaping(string s, string t){
    if(s == t){
        return true;
    }
    vector<int>index;

    for(int i=0;i<s.length();i++){
        if(s[i] != t[i]){
            index.push_back(i);
        }
    }
    if(index.size() != 2) return false;

    int i = index[0];
    int j = index[1];
    return (s[i]==t[j] && s[j]==t[i]);
    
}

int main(){
    string s = "bank";
    string t = "kanb";
    cout<<swaping(s,t);
}