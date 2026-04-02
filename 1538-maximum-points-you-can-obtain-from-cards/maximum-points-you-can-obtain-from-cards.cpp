class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum = 0, rsum = 0;
        for(int i=0; i<k; i++){
            lsum = lsum + cardPoints[i];
        }
        int l = cardPoints.size() - 1;
        int maxSum = lsum;
        for(int i=k-1; i>=0; i--){
            lsum = lsum - cardPoints[i];
            rsum = rsum + cardPoints[l];
            l--;
            maxSum = max(maxSum, lsum + rsum);
        }
        return maxSum;

    }
};