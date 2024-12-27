class Solution {
    /// the aboce is the brute force

public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),nums.end());
    }
};

//optimal approach
#include<bits/stdc++.h>

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int index=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i] < nums[i+1]){
                index = i;
                break;
            }
        }
        if(index == -1){
            reverse(nums.begin(),nums.end());
        }
        for(int i=n-1;i>index;i--){
            if(nums[i] > nums[index]);
            swap(nums[i],nums[index]);
            break;
        }
        reverse(nums.begin(),nums.end());

    }
};

