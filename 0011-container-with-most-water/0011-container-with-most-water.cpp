#include<bits/stdc++.h>
class Solution {
public:
    int area(int len, int breadth){
        return len*breadth;
    }
    int maxArea(vector<int>& height) {
        int totalLines = height.size()-1;
        int left = 0;
        int right = totalLines;
        int maxArea = 0;
        int capacity;
        
        for(int i = 0; i <= totalLines; i++){
            if(left < right){
                int len = min(height[left],height[right]);
                int breadth = right - left;
                capacity = area(len,breadth);
                if(capacity > maxArea){
                    maxArea = capacity;
                }
                if(height[right] < height[left]){
                    right--;
                }else{
                    left++;
                }
            }
        }
        return maxArea;
    }
};