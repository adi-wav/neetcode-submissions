class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> final_ans;
        unordered_map<string,vector<string>> mp;
        for(auto s:strs){
            string x=s;
            sort(x.begin(),x.end());
            mp[x].push_back(s);
        }
        for(auto i:mp){
            final_ans.push_back(i.second);
        }
        return final_ans;
    }
};
