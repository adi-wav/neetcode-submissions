class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> v(26,0), v1(26,0);
        for(char i:s){
            v[i-'a']++;
        }
        for(char i:t){
            v1[i-'a']++;
        }
        return v==v1;
    }
};
