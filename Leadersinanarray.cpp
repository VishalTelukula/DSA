// brute force
vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector<int> res;
    int n=a.size();
    for(int i=0;i<n;i++){
        bool check=true;
        for(int j=i+1;j<n;j++){
            if(a[i] <= a[j]){
                check = false;
                break;
            }

        }
        if(check){
            res.push_back(a[i]);
        }

    }
    sort(res.begin(),res.end());
    return res;
}
///////////////////////////////////////////////////////////////
/////////////////////optimal//////////////////////////////////
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


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

//{ Driver Code Starts.

int main() {
    int t; // Number of test cases
    cin >> t;
    cin.ignore(); // Ignore the newline after the integer input
    while (t--) {
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num); // Read the array elements from input string

        Solution obj;
        vector<int> result = obj.leaders(a);

        // Print the result in the required format
        if (result.empty()) {
            cout << "[]"; // Print empty brackets if no leaders are found
        } else {
            for (int i = 0; i < result.size(); i++) {
                if (i != 0)
                    cout << " ";
                cout << result[i];
            }
        }
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends