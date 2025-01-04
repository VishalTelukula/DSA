class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> pos,neg;
        for(int i=0;i<n;i++){
            if(nums[i] >0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        if(pos.size() > neg.size()){
            for(int i=0;i<neg.size();i++){
                nums[2*i] = pos[i];
                nums[2*i+1] = neg[i];
            }
            int index = neg.size() * 2;
            for(int i =neg.size();i<pos.size();i++){
                nums[index] = pos[i];
                index++;
            }
        }
        else
        for(int i=0;i<pos.size();i++){
            nums[2*i] = pos[i];
            nums[2*i+1] = neg[i];
        }
        int index = pos.size() * 2;
        for(int i=pos.size();i<neg.size();i++){
            nums[index] = neg[i];
            index++;
        }
        return nums;
    }
};
optimal but takes more time
//////////////////////////////////////////////////brute
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
         int n=nums.size();
        vector<int> ans(n,0);

        int negindex=1; int posindex=0;
        for(int i=0;i<n;i++){
            if(nums[i] <0){
                ans[negindex] = nums[i];
                negindex +=2;
            }
            else{
                ans[posindex] = nums[i];
                posindex +=2;
            }
        }
        return ans;
    }
};
takes less time almost 0ms