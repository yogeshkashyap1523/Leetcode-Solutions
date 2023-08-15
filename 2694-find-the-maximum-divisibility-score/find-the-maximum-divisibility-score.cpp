class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int i, j, score, max=0, ans=divisors[0];
        for(i=0 ; i<divisors.size() ; i++)
        {
            score = 0;
            for(j=0 ; j<nums.size() ; j++)
            {
                if(nums[j]%divisors[i]==0)
                {
                    score++;
                }
            }
            if(score>max)
            {
                max = score;
                ans = divisors[i];
            }
            else if(score==max && divisors[i]<ans)
            {
                ans = divisors[i];
            }
        }
        return ans;
    }
};