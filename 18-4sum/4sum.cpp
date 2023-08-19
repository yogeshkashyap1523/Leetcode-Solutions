class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        set<vector<int>> st;
        for(int i=0; i<n-3; i++)
        {
            for(int j=i+1; j<n-2; j++)
            {
                long long newTarget = (long long)target - (long long)nums[i] - (long long)nums[j];
                int low = j+1, high = n-1;
                while(low < high){
                    if(nums[low] + nums[high] < newTarget){
                        low++;
                    }
                    else if(nums[low] + nums[high] > newTarget){
                        high--;
                    }
                    else
                    {
                        st.insert({nums[i], nums[j], nums[low], nums[high]});
                        low++; 
                        high--;
                    }
                }
            }
        }
        vector<vector<int>> ans;
        for(auto it : st)
            ans.push_back(it);
        return ans;
    }
};