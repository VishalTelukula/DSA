class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //kadane Algo
        int sum=0;
        int maximum = nums[0];
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            if(sum > maximum){
                maximum = max(maximum, sum);
            }
             if(sum<0) {
                sum=0;
            }

        }
        return maximum;
    }
};