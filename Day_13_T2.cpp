#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int count=0;
        int sum=0;

        sort(costs.begin(), costs.end());

        for(int i=0 ;i<costs.size(); i++)
        {
            sum+=costs[i];
            if(sum > coins) break;
            else count++;
        }

        return count;
    }
};

int main(){

    int n,coins;
    cout<<"Enter size of Vector."<<endl;
    cin>>n;
   vector<int> costs;
   
    
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        costs.push_back(a);
    }

    cout<<"Enter total amount of money.";
    cin>>coins;

    Solution ob;
    cout<<ob.maxIceCream(costs, coins)<<endl;

    return 0;
}