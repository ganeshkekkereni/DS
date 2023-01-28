class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int n = g.size();
        int m = s.size();
        int curr = 0;
        int total = 0;
        for(int i=0; i<m; i++)
        {
            if(curr<n && g[curr]<=s[i])
            {
                total++;
                curr++;
            }
        }
        return total;
    }
};
