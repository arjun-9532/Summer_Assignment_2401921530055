#include <bits/stdc++.h>
using namespace std;
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        int pos=nums.size()-1;
        vector <int> final(nums.size());
        while(i<=j){
            if(abs(nums[i])> abs(nums[j])){
                final[pos]=nums[i]*nums[i];
                i++;
               
            }
            else{
                final[pos]=nums[j]*nums[j];
                j--;
            
            }
            pos--;
        }
        return final;
    }
