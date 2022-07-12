class Solution {
public:
    bool isMatch(string s, string p) {
        
        vector<vector<char>> dp(s.length()+1, vector<char> (p.length(),-1));
        return isMatch(0,0,s,p,dp);   
    }
    
    bool isMatch(int i, int j, string& s, string& p, vector<vector<char>> &dp){
        
        int sn = s.size();
        
        if(j == p.size()){
            return i == sn;
        }
        
        if(dp[i][j] != -1)return dp[i][j];
        
        
        if(p[j] == '*'){
            return dp[i][j] = isMatch(i,j+1, s,p,dp) || (i<sn &&isMatch(i+1,j,s,p,dp));
        }

        if(i<sn && (p[j] == '?' || p[j] == s[i])){
            return dp[i][j] = isMatch(i+1,j+1,s,p,dp);
        }
                      
        return dp[i][j] = 0;
    }
};