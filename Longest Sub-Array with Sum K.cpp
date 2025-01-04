
class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        // code here
        int res=0;
        for(int i=0;i<arr.size();i++){
            //j-i+1
            long long temp = 0;
            for(int j=i;j<arr.size();j++){

                temp += arr[j];
                if(temp == k){
                     res = max(res,j-i+1);
                }


            }

        }
            return res;

    }
};

