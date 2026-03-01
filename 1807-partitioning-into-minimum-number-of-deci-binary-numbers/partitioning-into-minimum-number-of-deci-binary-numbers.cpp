class Solution {
public:
    int minPartitions(string n) {
        int maxdigit = 0;
        for(char c : n){
            int digit = c -'0';
            if(digit > maxdigit){
                maxdigit = digit;
            }
        }
        return maxdigit ;
    }
};