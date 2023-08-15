class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string s="";
        for(auto c : words)
        { 
            for(auto v : c)
            { 
                string temp=c;
                reverse(c.begin(),c.end());
                 if(temp==c)
               {
                return temp;
               }
            }
           
        } 
        return s;
    }
};