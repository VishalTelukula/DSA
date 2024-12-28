//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        // if(n<0)
        // return false;
        int count=0;
        int temp=n;

        while(n>0){
            int lastDigit = n%10;
            n = n/10;
            count=count+(lastDigit*lastDigit*lastDigit);

        }
        if(count == temp )
        return true;
        else
        return false;


    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        bool flag = ob.armstrongNumber(n);
        if (flag) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends