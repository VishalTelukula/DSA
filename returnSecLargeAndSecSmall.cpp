vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int secLar=INT_MIN;
    int large=INT_MIN;
    int small = INT_MAX;
    int secSmall=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i] > large){
            large = a[i];
        }
        if(a[i] < small){
            small = a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i] >= secLar && a[i] != large){
            secLar = a[i];
        }
        if(a[i] <= secSmall && a[i]!= small){
            secSmall = a[i];
        }
    }
    return {secLar,secSmall};

}
