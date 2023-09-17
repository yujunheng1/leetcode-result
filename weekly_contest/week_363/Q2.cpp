class Solution {
public:
    int countWays(vector<int>& nums) {
        //sort the vector, and select the student
        sort(nums.begin(),nums.end());
        int ans=0;
        // if there is not a value in the vector is 0
        // then do not select any student is a choose
        if(nums[0]!=0){
            ans++;
        }
        //avoid exceed
        for(int i=0;i<nums.size()-1;i++){
            //choose the first k=i+1 students and don't choose the rest of students
            if((nums[i]<(i+1)&&(nums[i+1]>(i+1)))){
                ans++;
                cout<<i<<endl;
            }
        }
        int len=nums.size();
        // check if there is a choose, choose every students.
        if(nums[len-1]<(len)){
                ans++;
        }
        return ans;
    }
};