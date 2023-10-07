class Solution {
public:
    bool isPalindrome(int x) {
        long long int rev=0,rem,temp;
        temp=x;
        while(x>0)
        {
            rem=x%10;
            rev=(rev*10)+rem;
            x=x/10;
        }
        return (temp==rev);
    }
};