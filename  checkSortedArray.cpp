int isSorted(int n, vector<int> a) {
    // Write your code here.
    // for(int i=0;i<n-1;i++){
    //   if (a[i] > a[i + 1]) {
    //     return 0;
    //   }
    // }
    //     return 1;

    vector<int> sortedarr;
    sortedarr = a;
    sort(sortedarr.begin(),sortedarr.end());
    if(a == sortedarr) return 1;
    else
    return 0;

}