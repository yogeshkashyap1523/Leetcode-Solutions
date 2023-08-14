class Solution {
public:
    int firstUniqChar(string s) {
    unordered_map<char, int> mp;
    int n = s.size();

    for (int i = 0; i < n; i++) 
    {
        mp[s[i]]++;
    }

    // Find the first unique character and return its index
    for (int i = 0; i < n; i++) {
        char key = s[i];
        auto temp = mp.find(key);
        if (temp->second == 1) {
            return i;
        }
    }
    // If no unique character found, return -1
    return -1;
    }
};