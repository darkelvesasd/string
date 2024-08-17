class Solution {
public:
   string longestCommonPrefix(vector<string>& strs) {
    int n = strs.size();
    int m = strs[0].size();
    int ret = 0;
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (strs[i][j] != strs[i + 1][j] || strs[i + 1][j] == NULL)
            {
                return strs[0].substr(0,ret) ;
            }
        }
        ret++;
    }
    return strs[0].substr(0, ret);
}
};
