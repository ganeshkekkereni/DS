class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char, int> mp;
        vector<int> res;
        for(int i=0; i<s.length(); i++)
        {
            char ch = s[i];
            mp[ch] = i;
        }
        int prev = -1;
        int maxi = 0;
        for(int i =0; i<s.length(); i++)
        {
            maxi = max(maxi, mp[s[i]]);
            if(maxi == i)
            {
                res.push_back(maxi-prev);
                prev = maxi;
            }
        }
        return res;
    }
};
