#include<iostream>
#include<vector>
using namespace std;
// By me
int findLast(vector<int>&v,int i,int target){
    if(i < 0){
        return -1;
    }
    if(v[i] == target) return i;

    return findLast(v,i-1,target);
}
// by apna college 
int findLast2(vector<int>&v,int i,int target){
    if(i == v.size()){
        return -1;
    }
    int idx = findLast2(v,i+1,target);

    if(idx == -1){
        if(v[i]==target){
            return i;
        }
    }
    return idx;
}

int main(){
    vector<int> v= {1,2,3,3,4,5};
    cout<< findLast(v,v.size()-1,3)<<endl;
    cout<<findLast2(v,0,5)<<endl;
    
}