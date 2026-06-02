#include <bits/stdc++.h>

using namespace std;
int maxSubArray(vector<int>& nums) {
      int maximum_sum=INT_MIN;
     int current_sum=0;
     for (int i=0;i<nums.size();i++){
        current_sum =current_sum+nums[i];
        maximum_sum=max(maximum_sum,current_sum);
        if(current_sum<0){
            current_sum=0;
        }
     }
       return maximum_sum;
      }