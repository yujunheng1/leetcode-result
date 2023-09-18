class Solution {
public:
    vector<int> gnuams;
    vector<vector<int>> ans;// this is record the final result, which contains all the possible results
    vector<int> tmpans;//use to record a possible result
    vector<bool>flag=vector<bool>(10,0);// use to flag whether the node has benn added into ans
    void dfs(int x){
        //if it has been search enough node, record the path, then we return to last step
        if(tmpans.size()==gnuams.size()){
            ans.push_back(tmpans);
            return;
        }
        for(int i=0;i<gnuams.size();i++){
            //if ith node has not been added into the path
            if(flag[i]==false){
                tmpans.push_back(gnuams[i]);
                flag[i]=1;
                //search the next node from current node
                dfs(i+1);
                //after the node have been searched, we return to the last step, which mean this node has not been rearch
                //and this node has not been added into the ans
                flag[i]=0;
                tmpans.pop_back();  
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        gnuams=nums;
        //use dfs to rearch all the result
        dfs(0);
        return ans;
    }
};