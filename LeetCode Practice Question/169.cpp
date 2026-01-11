#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size()/2;
        return nums[n];
    }

int main(){
    vector<int> arr = {2,2,1,1,1,2,2};
     cout<<majorityElement(arr);
}