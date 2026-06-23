class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector<int> v1(26,0), v2(26,0);
        for(auto i:s)
            v1[i-'a']++;
        for(auto i:t)
            v2[i-'a']++;
        return v1==v2;
    }
};
