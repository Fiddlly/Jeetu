class Solution {
public:
    int numSquares(int n) {
        
        if(n<=0){
            return 0;
        }
        vector<int> cntMin(n+1, INT_MAX);
        
        cntMin[0] = 0;

        for(int i=1; i<=n; i++){
            for(int j=1; j*j<=i; j++){
                cntMin[i] = min(cntMin[i], cntMin[i-(j*j)]+1);
            }
        }
        
        return cntMin[n];
    }
};