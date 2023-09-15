class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0"||num2=="0"){
            return "0";
        }
        // like 123*123 the long size of this type is 3+3
        vector<int>ans(num1.size()+num2.size(),0);
        // first we use 3*123 and then restore the ans into vector, and then we use 2*123 such like that.
        for(int i=num1.size()-1;i>=0;i--){
            for(int j=num2.size()-1;j>=0;j--){
                ans[i+j+1]+=(num1[i]-'0')*(num2[j]-'0');
                //multiplication rounding
                ans[i+j]+=ans[i+j+1]/10;
                ans[i+j+1]%=10;

            }
        }
        int i=0;
        string res="";
        //remove the head 0 
        while(ans[i]==0)
            i++;
        //change the int type into string
        while(i<ans.size()){
            res+=to_string(ans[i++]);
        }
        return res;
    }
};
