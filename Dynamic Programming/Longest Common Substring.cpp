//Bottom-Up Approach
//Time Complexity - O(M*N)
//Space Complexity - O(M*N)
class Solution{
    public:
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        int dp[n+1][m+1];
        int result = 0;
        
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= m; j++){
                
                if(i == 0 || j == 0){
                    dp[i][j] = 0;
                }
                else if(S1[i-1] == S2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                    result = max(result,dp[i][j]);
                }
                else{
                    dp[i][j] = 0;
                }
            }
        }
        
        return result;
    }
};
