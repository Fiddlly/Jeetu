class Solution {
public:
    
    int minDistance(string word1, string word2) {
        
        int m = word1.length();
        int n = word2.length();
        
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        
        return minDistance(word1, word2, m, n, dp);
           
    }
    
    int minDistance(string word1, string word2, int i, int j, vector<vector<int>> &dp){
        
        //base
        
        if(i==0)return dp[i][j] = j;
        if(j==0)return dp[i][j] = i;
        
        //Recursive
        
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        
        if(word1[i-1] == word2[j-1]){
            return dp[i][j] = minDistance(word1, word2, i-1, j-1, dp);
        }
        
        else{
            int minInsert = minDistance(word1, word2, i, j-1, dp);
            int minDelete = minDistance(word1, word2, i-1, j, dp);
            int minReplace = minDistance(word1, word2, i-1, j-1, dp);
            
            return dp[i][j] = 1 + min(minInsert, min(minDelete, minReplace));
        }
    }
};