class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>ans(nums.size());
        int start = 0;
        int end = nums.size()-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2)
            {
                ans[end] = nums[i];
                end--;
            }
            else
            {
                ans[start] = nums[i];
                start++;
            }
        } 
        return ans;
    }
};