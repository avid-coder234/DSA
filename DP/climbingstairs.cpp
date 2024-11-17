class Solution {
public:
    int climbStairs(int n) {
        // Recursion Approach
        if(n == 0)return 1;

        if(n == 1)return 1;

        int left = climbStairs(n - 1);
        int right = climbStairs(n - 2);

        return left + right;
        if(n <= 1) return 1;
        int dp[n+1];


    //Bottom Up Approach
        dp[0] = 1;
        dp[1] = 1;

        for(int i = 2 ; i <= n ; i++){
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp[n];

    

    }
};