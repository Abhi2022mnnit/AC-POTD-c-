//2114. Maximum Number of Words Found in Sentences
//https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/description/?fbclid=IwAR29wkqWsjgSIw8_UzxLY2yAIkq4e86UpA9OKD7eb-Q8i1lZshKva_6iHaE

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int arr[n];
        int times=0;

        for(int i=0; i<n; i++){
            times =0;
            string str = sentences[i];
            for(int j=0; j<str.size(); j++){if(str[j] == ' ') times++;}
            arr[i] = times + 1;
        }

        return *max_element(arr,arr+n);
    }
};

int main(){

    int number_of_strings;
    cout<<"How many stirngs do you want to store: ";
    cin>>number_of_strings;

    vector<string> sentences;
    string str;
    
    for(int i=0; i<=number_of_strings; i++){
       getline(cin,str);
       sentences.push_back(str);
    }

    sentences.erase(sentences.begin()); 
    //since getline add newline at sentences[0],so to remove this we use erase function

    Solution ob;
    cout<<"The maximum number of words your given strings is/are: "<<endl;
    cout<<ob.mostWordsFound(sentences)<<endl;



    return 0;
}