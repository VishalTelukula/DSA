


class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        vector<int> res;
        int n=arr.size();
        int maximum = INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(arr[i] >= maximum){
                res.push_back(arr[i]);
            }
            maximum=max(maximum,arr[i]);
        }
         reverse(res.begin(),res.end());
         return res;
    }
};
here we iterate from last just for satisfying the condition
