class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();    
        //initialize all val with 1
        vector<int>ans(n,1);    
        //left side
        for(int i=1 ; i<n; i++)
        {
            ans[i] = ans[i-1] * nums[i-1];
        }    
        //right side
        int right = 1;
        for(int i=n-1; i>=0; i--)
        {
            ans[i] = ans[i]*right;
            right = right*nums[i];
        }    
        return ans;
    }
};