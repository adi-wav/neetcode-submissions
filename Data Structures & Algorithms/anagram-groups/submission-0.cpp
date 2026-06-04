class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> final_ans;
        vector<pair<string,string>> vp(strs.size());
        int i=0;
        for(auto s:strs){
            string x=s;
            vp[i].second = s;
            sort(s.begin(),s.end());
            vp[i].first = s;
            i++;
        }
        sort(vp.begin(),vp.end());
        int n=vp.size();
        vector<string> ss;
        ss.push_back(vp[0].second);
        int k=1;
        while(k<n){
            if(vp[k].first != vp[k-1].first){
                final_ans.push_back(ss);
                ss={};
            }
            ss.push_back(vp[k].second);
            k++;
        }
        final_ans.push_back(ss);
        return final_ans;
    }
};
