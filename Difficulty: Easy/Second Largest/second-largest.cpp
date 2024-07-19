//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
       int arrlen = arr.size();
       if(arrlen < 2){
           return -1;
       }
       int largest = arr[0];
       int secondLargest = INT_MIN;
       
       for(int i = 0; i < arrlen; i++){
           if(arr[i] > largest){
               secondLargest = largest;
               largest = arr[i];
           }
           if(arr[i] > secondLargest && arr[i] != largest){
               secondLargest = arr[i];
           }
       }
       return secondLargest;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends