#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// Vectors keep track of their own size when passed to functions
void longestCommonPrefix(vector<string>& s) {
    string ans="";
    sort(s.begin(), s.end());
    string first = s[0];
    string second = s[s.size() - 1]; // This works perfectly now!
    
    for(int i=0;i<first.size();i++){
        if(first[i] != second[i]){
            break;
        }
        ans += first[i];
    }
    cout<<ans<<endl;
}

int main() {
    vector<string> s = {"flower", "flow", "flight"};
    longestCommonPrefix(s);
    return 0;
}