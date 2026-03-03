class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;  // character -> last index
    
    int left = 0;
    int maxLength = 0;
    
    for (int right = 0; right < s.length(); right++) {
        char c = s[right];
        
        // If character already seen
        if (mp.find(c) != mp.end()) {
            left = max(left, mp[c] + 1);
        }
        
        mp[c] = right;  // update latest index
        maxLength = max(maxLength, right - left + 1);
    }
    
    return maxLength;
    }
};