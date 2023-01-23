//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        
        //int maxi= *max(a, a+n);
        int maxi=INT_MIN;
        for(int i=0; i<n; i++)
        {
            if(maxi< a[i]) maxi=a[i];
        }
        
        int arr[maxi+1] = {0} ;
        
        for(int i=0; i<n; i++)
        {
          
            arr[a[i]]=arr[a[i]]+1;
        
            if(arr[a[i]] == k) {
            return a[i];
                
            }
        
            
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout<<ob.firstElementKTime(a, n, k)<<endl;
	}
	
	return 0;
}
// } Driver Code Ends