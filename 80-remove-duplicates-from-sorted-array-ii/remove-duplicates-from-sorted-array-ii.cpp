class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        unordered_map<int,int> mp;
        for(auto i : nums)
        {
            mp[i]++;
            if(mp[i] <= 2)
            {
                nums[count] = i;
                count++;
            }
                
        }
        return count;
    }
};