class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+1,0);
        dp[0] = 1;
        dp[1] = 1;
//         //Memoization with Recursion
//         if(dp[n] != 0){
//             return dp[n];
//         }
       
//         dp[n] = climbStairs(n-1)+climbStairs(n-2);
        
//         return dp[n];
        
        
//         //Recursion
//         if(n<1){
//             return 0;
//         }
        
//         if(n==1){
//             return 1;    
//         }
        
//         if(n==2){
//             return 2;
//         }
        
//         return climbStairs(n-1)+climbStairs(n-2);
        
        //Bottom Up DP
        
        for(int i=2; i<=n; i++){
            dp[i] = dp[i-1]+dp[i-2];
        }
        
        return dp[n];
    }
};