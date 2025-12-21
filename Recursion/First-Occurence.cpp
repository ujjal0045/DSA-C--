#include<iostream>
#include<vector>
using namespace std;

int checkEle(vector<int> &v,int i){
    int size = v.size();
    int target = 90;
    if( size-1== i){
        return -1;
    }
    if(v[i]==target){
        return i;
    }
    checkEle(v,i+1);
}

int main(){
    vector<int> v = {1,2,3,4,6,4};
    // for(int i=0;i<v.size();i++){
    //     if(v[i] == 90){
    //         cout<<i<<endl;
    //         break;
    //     }
    // }
    cout<<checkEle(v,0);
}