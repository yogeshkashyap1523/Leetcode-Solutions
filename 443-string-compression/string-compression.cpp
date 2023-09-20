class Solution {
public:
    int compress(vector<char>& chars) {
        string ans;
        if(chars.size()==1)
        return 1;
        int cnt=1;
        chars.push_back('7');
        for(int i=0;i<chars.size()-1;i++)
        {
            if(chars[i]==chars[i+1])
            cnt++;
            else
            {
                if(cnt==1)
                ans+=chars[i];
                else
                ans+=chars[i]+to_string(cnt),cnt=1;
            }
        }
        chars.clear();
        for(auto it:ans)
        chars.push_back(it);
        return chars.size();
    }
};