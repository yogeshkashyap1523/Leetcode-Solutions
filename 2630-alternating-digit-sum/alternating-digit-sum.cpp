class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> temp;
        while (n != 0) {
            temp.push_back(n%10);
            n /= 10;
        }
        int eSum = 0, oSum = 0;
        for (int i=temp.size()-1; i>=0; i--) 
        {
            if (i%2 == 0) 
                eSum += temp[i];
            else 
                oSum += temp[i];
        }
        if ((temp.size()-1)%2 == 0)
            return eSum - oSum;
        else
            return oSum-eSum;
    }
};