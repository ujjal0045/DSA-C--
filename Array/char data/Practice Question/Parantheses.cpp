#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isValid(string s){
    if(s.length() % 2 == 1) return false;

    vector<char>v;
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        if(ch == '{' || ch == '(' || ch == '['){
            v.push_back(s[i]);
        }
        else{
            if(v.size() > 0){
                if(ch == ')' && v.back() == '('){
                    v.pop_back();
                }
                else if(ch == '}' && v.back() == '{'){
                    v.pop_back();
                }
                else if(ch == ']' && v.back() == '['){
                    v.pop_back();
                }
                else {
                    return false;
                }
            }   
            else{
                return false;
            }
        }

    }
    if(v.size() == 0){
        return true;
    }else{
        return false;
    }

}

int main(){
    string s ="({})";
    cout<< isValid(s);
}