#include<iostream>
#include<vector>
using namespace std;
int xorBeauty(vector<int>& nums) {
        int ans=0;
        for(int num : nums){
            ans = ans ^ num;
        }
        return ans;
    }


int main(){
    vector<int> v = {15,45,20,2,34,35,5,44,32,30};
    cout<<xorBeauty(v);
}