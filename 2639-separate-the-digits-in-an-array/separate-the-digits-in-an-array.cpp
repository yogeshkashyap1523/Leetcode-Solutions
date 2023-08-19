class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for (auto i : nums) 
        {
            string temp = to_string(i);
            for (auto x : temp) 
            {
                ans.push_back(x-'0');
            }
        }
        return ans; 
    }
};