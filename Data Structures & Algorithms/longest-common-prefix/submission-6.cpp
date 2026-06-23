class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string tmp=strs[0];
        int j=0;
        string ans="";
        for(int i=0;i<tmp.size();i++){
            ans+=tmp[i];
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]!=strs[0][i]){
                    return ans.substr(0,ans.size()-1);
                }
            }
            if(i==tmp.size()-1)
                return ans;
        }
        return "";
    }
};