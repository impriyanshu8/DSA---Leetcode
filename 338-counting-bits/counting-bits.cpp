class Solution {
public:
    int countsetBits(int n){
        int count = 0;
        while(n > 0){
            count += (n & 1);
            n = n >> 1;
        }

        if(n == 1) count += 1;
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> res(n+1);
        for(int i=0; i<=n; i++){
            res[i] = countsetBits(i);
        }
        return res;
    }
};