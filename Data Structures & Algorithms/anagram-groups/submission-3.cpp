class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> mp;
        for(auto i: strs){
            vector<int> v(26,0);
            for(auto c:i)
                v[c-'a']++;
            mp[v].push_back(i);
        }
        vector<vector<string>> ans;
        for(auto i:mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};
