class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string final_ans="";
        string ans=strs[0];
        if(strs.size()==1) return ans;
        for(int i=0;i<ans.size();i++){
            for(int j=1;j<strs.size();j++){
                if(ans[i]!=strs[j][i]){
                    return final_ans;
                }
            }
            final_ans += ans[i];
        }
        return ans;
    }
};