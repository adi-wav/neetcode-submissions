class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector<int> v1(26,0);
        for(auto i:s)
            v1[i-'a']++;
        for(auto i:t)
            v1[i-'a']--;
        for(auto i:v1)
            if(i!=0)
                return false;
        return true;
    }
};
