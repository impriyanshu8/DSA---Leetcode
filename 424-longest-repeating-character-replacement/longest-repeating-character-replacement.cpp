class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map <char,int>mp;
        int l=0, r=0, maxLength = 0, maxFreq = 0;
        while(r < s.length()){
            mp[s[r]]++;
            maxFreq = max(maxFreq, mp[s[r]]);
            int windowLength = r-l+1;
            int replace = windowLength - maxFreq;
            if (replace > k) {
                mp[s[l]]--;
                l++;
            }
            else{
                maxLength = max(maxLength, windowLength);
            }
            r++;

        }
        return maxLength;
    }
};