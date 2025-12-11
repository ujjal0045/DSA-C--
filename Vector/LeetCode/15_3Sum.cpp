#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
// 1st apporach
vector<vector<int>> threeSum(vector<int>& nums){
    int n= nums.size();
    sort(nums.begin(),nums.end());
    set<vector <int>> s; // the best use is ignore -> Duplicate
    vector<vector<int>> output;

    // Brute Force 
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(nums[i]+nums[j]+nums[k] == 0 && i!=j && i!=k && j!=k){
                    s.insert({nums[i],nums[j],nums[k]});
                }
            }
        }
    }
    for(auto val : s){
        output.push_back(val);
    }
    return output;
}

int main(){
    vector<int>num = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans = threeSum(num);

    cout << "Triplets that sum to zero:\n";
    for(auto &v : ans){
        cout << "[ ";
        for(int x : v) cout << x << " ";
        cout << "]\n";
    }

    return 0;   
}