#include <iostream>
#include<vector>
using namespace std;
// brute approach
int maxArea(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int w = j - i;
                int bar = min(height[i],height[j]);
                int currWater = w * bar;

                ans = max(ans,currWater);

            }
        }
        return ans;
}
// Two pointer approach
int maxArea2(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        int st = 0, end = n-1;
        while(st  < end){
            int width = end - st;
            int ht = min(height[st],height[end]);
            int currWater = width * ht;
            ans = max(ans,currWater);
            if(height[st] < height[end]){
                st++; 
            }else {
                end--;
            }
        }

        return ans;
    }

int main() {
    vector<int> v={1,8,6,2,5,4,8,3,7};
    cout<<maxArea2(v);
}