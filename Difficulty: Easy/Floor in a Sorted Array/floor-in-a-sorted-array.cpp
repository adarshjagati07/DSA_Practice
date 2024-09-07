//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> &v, long long n, long long x) {
        int answer = -1;  // Initialize with -1 to indicate no valid floor found
        
        int low = 0;
        int high = n - 1;
        int mid;
        
        while (low <= high) {
            mid = low + (high - low) / 2;
            
            if (v[mid] <= x) {
                answer = mid;  // Store the current index as a potential answer
                low = mid + 1; // Move right to find a larger floor
            } else {
                high = mid - 1; // Move left to find a smaller value
            }
        }
        
        return answer;  // Return the final answer (index of the floor element)
    }

};


//{ Driver Code Starts.

int main() {

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long x;
        cin >> x;

        vector<long long> v;

        for (long long i = 0; i < n; i++) {
            long long temp;
            cin >> temp;
            v.push_back(temp);
        }
        Solution obj;
        cout << obj.findFloor(v, n, x) << endl;
    }

    return 0;
}
// } Driver Code Ends