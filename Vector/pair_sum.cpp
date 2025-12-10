#include<iostream>
#include<vector>
#include<algorithm>
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
    // This method only for sorted array
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

//Best method take O(n log N) time complexity
void twoSum(vector<int> v, int size,int t){
    vector<pair<int,int>> arr; // Value,Index 
    // store original vector to temp vector
    for(int i=0;i<size;i++){
        arr.push_back({v[i],i});
    }
    //Sort the arr vector
    sort(arr.begin(),arr.end()); 

    int st = 0, end = size-1;
    while(st<end){
        int sum = arr[st].first + arr[end].first;
        if(sum == t){
            cout<< arr[st].second <<" - " <<arr[end].second<<endl;
        } else if(sum<t){
            st++;
        } else {
            end--;
        }
    }
    cout<<0 <<endl;
}


int main(){
    vector<int> v ={3,2,4};
    int target = 6;
    //checksum(v,v.size(),target);
    pairSum(v,v.size(),target);
}