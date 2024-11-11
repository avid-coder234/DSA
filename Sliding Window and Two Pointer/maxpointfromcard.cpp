/*
Brute Force

1. Take the array 
2. Take the sum of first k elements from the left 
3. Now take 2 variable leftsum and rightsum 
4. remove the element from the left and add the element from the right
5. add the left sum and right sum and compare the max sum 
*/
#include<vector>
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lSum = 0;
        int rSum = 0;
        int maxSum = 0;

        for(int i = 0 ; i < k ; i++){
            lSum = lSum + cardPoints[i];
        }
        maxSum = lSum;
        int n = cardPoints.size();
        int r = n - 1;

        for(int i = k - 1 ; i >= 0 ; i--){
            lSum = lSum - cardPoints[i];
            rSum = rSum + cardPoints[r--];
            maxSum = max(maxSum,lSum + rSum);
        }
        return maxSum;
    }
};