#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a =nums.size(),c=0,k=0;
        vector<int>ans;
        for(int i=0;i<a;i++){
            for(int j=i+1;j<a;j++){
                if((nums[i]+nums[j])==target){
                  c=i;
                  k=j;
                  break;
                }
            }
        }
        ans.push_back(c);
        ans.push_back(k);
        return ans;
    }
};