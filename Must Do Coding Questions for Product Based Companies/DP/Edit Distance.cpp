  class Solution{
  public:
    int editDistance(string s, string t) {
        
        int n1 = s.size(), n2 = t.size();
        
        int dp[n1 + 1][n2 + 1];
        
        for(int i = 0; i <= n1; i++){
            for(int j = 0; j <= n2; j++){
                
                if(i == 0){
                    dp[i][j] = j;
                }
                else if(j == 0){
                    dp[i][j] = i;
                }
                else if(s[i-1] == t[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }
                else{
                    dp[i][j] = min({dp[i-1][j-1],dp[i][j-1],dp[i-1][j]}) + 1;
                }
            }
        }
        return dp[n1][n2];
    }
};
