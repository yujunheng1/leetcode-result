class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int len=nums.size();
        int ans=0;
        for(int i=0;i<len;i++){
            int tmp=i;
            int sumk=0;
            //Check if the last bit is 1. such as 011&1=1 110&1=0
            while(tmp!=0){
                if(tmp&1){
                    sumk+=1;
                }
                tmp=tmp>>1;
            }
            //if the sum of k bits is k
            if(sumk==k)
            {
                ans+=nums[i];
            }
        }
        return ans;
    }
};