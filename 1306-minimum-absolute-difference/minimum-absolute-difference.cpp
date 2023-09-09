class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
       vector<vector<int>>ans;
       sort(arr.begin(),arr.end());
       int min_diff=INT_MAX;
 
       for(int i=1;i<arr.size();i++)
       {
           int val=abs(arr[i]-arr[i-1]);
           min_diff=min(min_diff,val);
       }
       
       for(int i=1;i<arr.size();i++)
       {
           if(abs(arr[i]-arr[i-1])==min_diff)
           ans.push_back({arr[i-1],arr[i]});
       }
       return ans;
    }
};