#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isAnagram(string str1,string str2){
    if(str1.length() != str2.length()){
        return false;
    }
    int count[26];

    // Linear process
    for(int i=0;i<str1.length();i++){
        int idx = str1[i] - 'a';
        count[idx]++;
    }
    for(int i=0;i<str2.length();i++){
        int idx = str2[i] - 'a';
        if(count[idx] == 0) {
            return false;
        }
        count[idx] --;
    }
    cout<<"Valid Anagram"<<endl;
    return true;
}

int main(){
    string s1 = "anagram";
    string s2 = "nagaram";
    

    cout<<isAnagram(s1,s2);
}