class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int eggDrop(int n, int k) 
    {
        // your code here
         int dp[k + 1][n + 1];
        for(int d = 1; d <= n; d++){
            dp[1][d] = 1;
            dp[0][d] = 0;
        }
        for(int d = 1; d <= k; d++){
            dp[d][1] = d;
        }
        for(int d = 2 ; d <= k; d++){
            for(int p = 2; p <= n; p++){
                dp[d][p] = d;
                for(int i = 1; i <= d; i++){
                    dp[d][p] = min(max(dp[i - 1][p - 1], dp[d - i][p]) + 1 , dp[d][p]);
                }
            }
        }
        return dp[k][n];
    }
};
