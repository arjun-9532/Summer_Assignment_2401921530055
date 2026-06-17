#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
         unordered_map<int, int> Greater;
        stack<int> s;

        for (int i = nums2.size() - 1; i >= 0; i--) {
            while (!s.empty() && s.top() <= nums2[i]) {
                s.pop();
            }

            Greater[nums2[i]] = s.empty() ? -1 : s.top();

            s.push(nums2[i]);
        }

        vector<int> ans;

        for (int num : nums1) {
            ans.push_back(Greater[num]);
        }

        return ans;
    }