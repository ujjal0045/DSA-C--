#include<iostream>
#include<vector>
using namespace std;

int findError(vector<int>nums){
    int dup,miss;
    for(int val=1;val<=nums.size();val++){
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == val) count++;
        }
        if(count > 1) dup = val;
        if(count == 0) miss = val;
    }
    cout<<"Duplicate value: "<<dup<<endl;
    cout<<"Missing value : "<<miss<<endl;
}

//Frequecy method
void Fre(vector<int>& nums){
    int n = nums.size();

    vector<int>Frequency(n+1,0);
    // for(int idx=0;idx<=n;idx++){
    //     int val = nums[idx];
    for(int val:nums){
        Frequency[val] ++;
    }
    int repeating,missing;
    for(int i=1;i<=n;i++){
        if(Frequency[i]>1) repeating= i;
        else if(Frequency[i] == 0) missing = i; 
    }
    cout<<"Repeating : "<<repeating <<endl;
    cout<<"Missing : "<<missing <<endl;
}

int main(){
    vector<int> nums={2,2};
    findError(nums);
}