class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> vt;
        for(int i=0;i<nums.size();i++){
            vt.push_back({nums[i],i});
        }
        sort(vt.begin(),vt.end());
        int i=0,j=vt.size()-1;
        cout<<j;
        while(i<j){
            int sum=vt[i].first + vt[j].first;
            if(sum==target){
                return {min(vt[i].second, vt[j].second), max(vt[i].second, vt[j].second)};
            }
            else if(sum>target){
                j--;
            }
            else{
                i++;
            }
        }
        return {};
    }
};
