class Solution {
public:
    int jump(vector<int>& nums) {
        int len=nums.size();
        vector<int> dp(len+1,10000+10);
        dp[0]=0;
        for(int i=0;i<len;i++){
            int tmp=nums[i];
            for(int j=i+1;(j<len)&&(j<=i+tmp);j++){
                //dp[j]=min(last node+1, currentnode)
                dp[j]=min(dp[i]+1,dp[j]);
            }
        }
        return dp[len-1];
    }
};