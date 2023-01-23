#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
       
        int count=0;

        set <string> st;
        for(int j=1; j<=s.size(); j++){
            st.insert(s.substr(0,j));
        }

        for(int i=0; i<words.size(); i++)
        {
            
            
                if(words[i] == next(st.begin(), i)) count++;
                
            
        }

        return count;
    }
};

int main(){
    int n;
    cin>>n;

    vector<string> words;

    for(int i=0; i<n; i++){
        string a;
        cin>>a;
        words.push_back(a);
    }

    string s;
    cout<<"Enter string to be searched: "<<endl;
    cin>>(s);

    Solution ob;
    cout<<ob.countPrefixes(words, s)<<endl;

    return 0;
}