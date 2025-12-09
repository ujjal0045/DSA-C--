#include<iostream>
#include<vector>
using namespace std;

void sum(vector<int> v, int size,int t){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(v[i]+v[j] == t) cout<<i <<" - " << j <<endl;
        }
    }
}

int main(){
    vector<int> v ={2,7,11,15};
    int target = 22;
    sum(v,v.size(),target);
}