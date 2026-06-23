class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector<int> v1(26,0);
        for(int i=0;i<s.size();i++){
            v1[s[i]-'a']++;
            v1[t[i]-'a']--;
        }
        for(auto i:v1)
            if(i!=0)
                return false;
        return true;
    }
};
