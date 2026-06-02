 #include <bits/stdc++.h>
 using namespace std;
 double findMaxAverage(vector<int>& nums, int k) {
        long long sum=0;
        for (int i=0;i<k;i++){
            sum=sum+nums[i];
        }
        long long maximum_sum=sum;
        for(int i=k ; i<nums.size();i++){
            sum+=nums[i];
            sum-=nums[i-k];
            maximum_sum=max(maximum_sum , sum);
        }
        return (double)maximum_sum/k;
    }
    