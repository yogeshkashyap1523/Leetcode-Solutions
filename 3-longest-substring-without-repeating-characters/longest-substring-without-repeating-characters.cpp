class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxLength = 0;
        unordered_set<char> charSet;
        int j = 0;
        
        for(int i = 0; i < n; i++) 
        {
            if (charSet.count(s[i]) == 0)
            {
                charSet.insert(s[i]);
                maxLength = max(maxLength, i - j + 1);
            } 
            else 
            {
                while(charSet.count(s[i])) 
                {
                    charSet.erase(s[j]);
                    j++;
                }
                charSet.insert(s[i]);
            }
        }
        
        return maxLength;
    }
};