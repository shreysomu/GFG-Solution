class Solution {

    int[][] dp;

    int solve(int digitsLeft, int sum) {
        if (digitsLeft == 0)
            return sum == 0 ? 1 : 0;

        if (sum < 0)
            return 0;

        if (dp[digitsLeft][sum] != -1)
            return dp[digitsLeft][sum];

        int ways = 0;

        for (int d = 0; d <= 9; d++) {
            ways += solve(digitsLeft - 1, sum - d);
        }

        return dp[digitsLeft][sum] = ways;
    }

    public int countWays(int n, int sum) {

        if (sum == 0 || sum > 9 * n)
            return -1;

        dp = new int[n + 1][sum + 1];
        for (int i = 0; i <= n; i++)
            Arrays.fill(dp[i], -1);

        int ans = 0;

        for (int first = 1; first <= 9; first++) {
            if (sum >= first)
                ans += solve(n - 1, sum - first);
        }

        return ans == 0 ? -1 : ans;
    }
}
