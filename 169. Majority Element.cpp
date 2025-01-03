class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int n=nums.size();

	int val=n/2;
	for(int i=0;i<n;i++){
        int count=0;
		for(int j=i;j<n;j++){
			if(nums[i] == nums[j]){
				count++;
			}
			if(count > val){
				return nums[j];
			}
		}
	}
	return {};
    }
};
////////////////////////////bruteForce////////////////
class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int n=nums.size();
      map<int,int> mp;
      for(int i=0;i<n;i++){
        mp[nums[i]]++;
      }
      for(auto it : mp){
        if(it.second > n/2){
            return it.first;
        }
      }
	return {};
    }
};
/////////////////////optimal//////////////////////////////