//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	 int nonZero = 0;
	    for(int i=0; i<n; i++){
	        if(arr[i] != 0) {
	            swap(arr[i] , arr[nonZero++]);}
	    }
	    
	}
	
};


//9
// 1 4 5 0 0 3 5 0 4

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        cout << "\n";ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        
    }
    return 0;
}
// } Driver Code Ends