class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0, j=nums.size()-1;
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                while(nums[i]==val and i<j){
                    swap(nums[i],nums[j--]);
                }
            }
        }
        for(auto i : nums)
            if(i==val) k++;
        return nums.size()-k;
    }
};