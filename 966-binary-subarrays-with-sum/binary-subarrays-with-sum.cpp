class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int preSum = 0, count = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        for(int i=0; i<nums.size(); i++){
            preSum += nums[i];
            int remove = preSum - goal;
            count += mp[remove];
            mp[preSum] += 1;
        }
        return count;
    }
};