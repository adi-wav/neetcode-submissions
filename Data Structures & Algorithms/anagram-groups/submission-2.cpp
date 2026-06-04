class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> final_ans;
        unordered_map<string,vector<string>> mp;
        for(auto s:strs){
            vector<int> fr(26,0);
            for(auto c:s){
                fr[c-'a']++;
            }
            string key = to_string(fr[0]);
            for(int i=1;i<26;i++){
                key+=","+to_string(fr[i]);
            }
            mp[key].push_back(s);
        }
        for(auto i:mp){
            final_ans.push_back(i.second);
        }
        return final_ans;
    }
};
