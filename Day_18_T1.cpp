//https://leetcode.com/problems/create-target-array-in-the-given-order/submissions/880741170/?fbclid=IwAR29wkqWsjgSIw8_UzxLY2yAIkq4e86UpA9OKD7eb-Q8i1lZshKva_6iHaE

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> vec;
        int n = index.size();
        for(int i=0; i<n; i++){
            vec.insert(vec.begin()+index[i],nums[i]);
        }
        return vec;
    }
};