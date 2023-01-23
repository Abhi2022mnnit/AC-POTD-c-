//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        vector<string> vec;
        
        for(int i=0; i<S.size(); i++)
        {
            string str;
            int j=0;
            
            while(S[i] != '.' && S[i] != '\0')
            {
                str=str+S[i];
                i++;
                
            }
            vec.push_back(str);
            vec.push_back(".");
        }
        
        string gfg;
        for(int i=vec.size()-2; i>=0; i--)
        {
            gfg+=vec[i];
        }
        return gfg;
        
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends