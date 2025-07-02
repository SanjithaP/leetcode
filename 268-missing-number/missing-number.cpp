class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size=nums.size();
        if(nums[size-1]!=nums.size()) return nums.size();
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]+1){
                return nums[i-1]+1;
            }
        }
        return 0;
    }
};