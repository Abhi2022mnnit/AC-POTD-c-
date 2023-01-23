//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}
// } Driver Code Ends


int missingNumber(int A[], int N)
{
    // method 1: BUT it throws TLE
    /*int a=1;
    for(int i=0; i<N-1; i++)
    {
        if(A[i] == a) {a++; i=-1;}
        
    }
            return a;*/
            
    //Method 2: 
    int ans=0;
    for(int i=0; i<N-1; i++) {ans = ans ^ A[i];}

    for(int i=1; i<=N; i++) {ans = ans ^ i;}
    
    return ans;
}