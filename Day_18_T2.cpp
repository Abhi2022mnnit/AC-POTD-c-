//https:leetcode.com/problems/lemonade-change/submissions/880766260/?fbclid=IwAR26tvIN44bPJGaHbtcHg-595yung1JEgeQYcexE2G0hDiRzILMFJUyCZEQ

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int arr[3] = {0};
        bool flag = 1;

        for(int i=0; i<bills.size(); i++){
            if(bills[i] == 5) arr[0]++;

            else if(bills[i] == 10) {
                arr[1]++;
                
                if(arr[0] > 0) {arr[0]--;}
                else {flag = 0; break;}
            }


            else{
                arr[2]++;
                if(arr[1]>0 && arr[0]>0) {arr[1]--; arr[0]--;}
                else if(arr[1]<=0 && arr[0]>=3) {arr[0]-=3;}
                else {flag =0; break;}
            }
        }

        if(flag) return 1;       
        else return 0;
    }
};