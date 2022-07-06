class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int ans = 0, minAns = 0;
        
        for(auto i: nums){
            ans+= i;
            if(ans<minAns){
                minAns = ans;
            }
        }
        
        return -minAns+1;
        
        
    }
};