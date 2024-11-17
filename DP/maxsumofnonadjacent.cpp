#include <bits/stdc++.h> 
// Recursion method 
int f(int i,vector<int> &nums,vector<int> &dp){
    if(i == 0)return nums[i];

    if(i < 0)return 0;

    if(dp[i] != -1)return dp[i];

    int pick = nums[i] + f(i - 2,nums,dp);
    int notpick = 0 + f(i - 1,nums,dp);
    
    return dp[i] = max(pick,notpick);

}
int maximumNonAdjacentSum(vector<int> &nums){
    int n = nums.size();
    vector<int> dp(n,-1);
    return  f(n - 1,nums,dp);
}



//TabulationCode
#include <bits/stdc++.h> 

int maximumNonAdjacentSum(vector<int> &nums){
    int n = nums.size();

    int prev = nums[0];
    int prev2 = 0;

    for(int i = 1 ; i < n ; i++){
        int pick = nums[i];
        if(i > 1) pick += prev2;

        int notPick = 0 + prev;
        int curr = max(pick,notPick);

        prev2 = prev;
        prev = curr;
    }
    return prev;
    
}