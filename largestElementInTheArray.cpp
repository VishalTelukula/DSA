class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int n= arr.size();
        // sort(arr.begin(),arr.end());
        // int res =arr[n-1] ;
        // return res;
        int max=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i] >max ){
                max=arr[i];
            }
        }
        return max;
    }
};