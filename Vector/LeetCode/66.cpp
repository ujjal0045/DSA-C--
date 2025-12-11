#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void plusOne(vector<int>& digits){
   int n= digits.size();
        for(int i = n-1;i>=0;i--){
            if(digits[i]== 9){
                digits[i] = 0;
            } else{
                digits[i]++;
                break;
            }
        }
        if(digits[0] == 0) {
            vector<int>ans(n+1,0);
            ans[0] = 1;
            return ans;
        }
        return digits;
}

 

int main(){
    vector<int> nums={1,2,3};
    plusOne(nums);

}