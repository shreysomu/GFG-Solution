class Solution{
  public:
     int solve(string& S, int i, int j, vector<vector<int>>& dp){
    // Base Case
        if(i>=j)
            return 0;
        if(dp[i][j] != -1)
            return dp[i][j];
        if(S[i] == S[j])
            return dp[i][j] = solve(S, i+1, j-1, dp); // ignoring when palindrome condition is satisfied
        
        else{
            int res1 = 1 + solve(S, i+1, j, dp); //inserting at the back 
            int res2 = 1 + solve(S, i, j-1, dp); // inserting at the front
            return dp[i][j] = min(res1, res2); // taking minimum of all possibilities 
        }
    }
    int countMin(string str){
    //complete the function here
    vector<vector<int>> dp(str.size(), vector<int>(str.size(), -1));
        return solve(str, 0, str.size()-1, dp);
    }
};
