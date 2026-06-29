class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans = digits;
        for(int i = digits.size()-1;i>=0;i--){
            if(ans[i]!=9){
                ans[i]+=1;
                return ans;
            }
            else if(ans[i]==9){
                ans[i]=0;
                continue;
            }
            }
            ans.insert(ans.begin(),1);
             return ans ;
    }
};