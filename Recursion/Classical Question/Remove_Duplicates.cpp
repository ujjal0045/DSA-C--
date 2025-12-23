#include<iostream>
#include<string>
using namespace std;

void removeDup(string str,string ans, int i, int map[26]){
    // base case
    if(i == str.size()){
        cout<<"ans : "<<ans <<endl;
        return;
    }
    char ch = str[i];
    int mapIdx = (int)(ch - 'a');

    if(map[mapIdx]){ //Duplicate
        removeDup(str,ans,i+1,map);
    } else{ // Not duplicates
        map[mapIdx] = true;
        removeDup(str,ans+str[i],i+1,map);
    }
}

int main(){
    string str = "appnnacollege";
    string ans = "";
    int map[26] = {false};

    removeDup(str,ans,0,map);
    return 0;
}