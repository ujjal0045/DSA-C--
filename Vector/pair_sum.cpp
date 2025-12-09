#include<iostream>
#include<vector>
using namespace std;

void checksum(vector<int> v, int size,int t){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(v[i]+v[j] == t){
                cout<<i <<" - " << j <<endl;
                break;
            }
                
        }
    }
    cout<<0 <<endl;
}

void pairSum(vector<int> v, int size,int t){
    int st = 0, end = size-1;
    while(st<end){
        int sum = v[st] + v[end];
        if(sum == t){
            cout<<st <<" - " <<end <<endl;
            break;
        } else if(sum<t){
            st++;
        } else {
            end--;
        }
    }
    cout<<0 <<endl;
}

int main(){
    vector<int> v ={2,7,11,15};
    int target = 18;
    checksum(v,v.size(),target);
    pairSum(v,v.size(),target);
}