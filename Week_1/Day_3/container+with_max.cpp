#include <bits/stdc++.h>
using namespace std;
    int maxArea(vector<int>& height) {
       int i=0;
       int j=height.size()-1;
       int max_area=INT_MIN;
       int area=0;
       while(i<j){
        area=min(height[i],height[j])*(j-i);
        max_area=max(max_area,area);
        if(height[i]<height[j]){
            i++;
        }
        else{
            j--;
        }
       }
       return max_area;
    }