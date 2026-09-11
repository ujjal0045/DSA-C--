#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

void reverseString(string s){
    int n = s.length();
    string data="";
    data.reserve(n);
    for(int i=n-1;i>=0;i--){
        data += s.at(i);
    }
    cout<<"Reverse data: "<<data<<endl;
}

// 2nd method and more efficitent
void reverseString2(string &s){
    int left = 0;
    int right = s.length()-1;
    while(left<right){
        char temp = s[left];
        s[left]= s[right];
        s[right] = temp;

        left++;
        right--;
    }
    cout<<"Reverse data: "<<s<<endl;
}

int main() {
    string st1 ="";
    cout<<"Enter the data: ";
    getline(cin,st1);
    reverseString(st1);
    return 0;
}