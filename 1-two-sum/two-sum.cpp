class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        for(int i=0; i<nums.size(); i++)
        {
            int sum = nums[i];
            for(int j= i+1; j<nums.size(); j++)
            {
                int ans = sum + nums[j];
                if(ans == target)
                {
                    res.push_back(i);
                    res.push_back(j);
                    break;
                }
            }
        }
        return res;
    }
};