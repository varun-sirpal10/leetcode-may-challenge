class Solution {
public:
    int minDistance(string a, string b) {
        int n = a.size(), m = b.size(), add, del, rep;
        int dp[n+1][m+1];
        memset(dp, 0, sizeof dp);
        for(int i=0; i<n+1; ++i) dp[i][0] = i;
        for(int i=0; i<m+1; ++i) dp[0][i] = i;
        for(int i=1; i<n+1; ++i){
            for(int j=1; j<m+1; ++j){
                add = dp[i-1][j] + 1;
                del = dp[i][j-1] + 1;
                rep = dp[i-1][j-1] + ((a[i-1]==b[j-1]) ? 0 : 1);
                dp[i][j] = min({add, del, rep});
            }
        }
        return dp[n][m];
    }
};