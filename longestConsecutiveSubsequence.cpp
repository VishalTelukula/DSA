int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
    int n=a.size();
    int count = 0;
    int longer =1;
    int min = INT_MIN;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(a[i] - 1 == min){
            min = a[i];
            count +=1;

        }
        else if ( min != a[i]){
            count =1;
            min = a[i];
        }
        longer = max(longer ,count);

    }
     return longer;


}