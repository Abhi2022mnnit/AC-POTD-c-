//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    
    string str1;
    stringstream str_s;
    //str1=str(n);
    
    str_s<<n;
    str_s>>str1;
    
    for(int i=0; i<str1.size(); i++){
        if(str1[i] == '0') str1[i] = '5';
    }
    
    return stoi(str1);
    
   
    // Your code here
    /*vector<int> vec;
    int a=n;
    while(a>0){
        vec.push_back(a%10);
        a/=10;
    }
    
    reverse(vec.begin(), vec.end());
    for(int i=0; i<vec.size(); i++){
        if(vec[i] == 0) vec[i] =5;
        a = a*10 + vec[i];
    }
    
    return a;*/
    
    
    
    
    
}