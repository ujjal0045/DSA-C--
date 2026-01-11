#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// Time complexity = O(Nlogn)
int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size()/2;
        return nums[n];
}

// Time complexity = O(n)
int majorityElement2(vector<int>& nums) {
        int count = 0;
        int candidate = 0;

        for(int num : nums){
            if(count == 0){
                candidate = num;
            }
            if(num == candidate){
                count++;
            }
            else {
                count--;
            }
        }
        return candidate;
    }

int main(){
    vector<int> arr = {2,2,1,1,1,2,2};
     cout<<majorityElement(arr);
}