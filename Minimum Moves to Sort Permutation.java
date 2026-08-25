class Solution {
    public int minMoves(int[] arr) {
        // code here
        int n = arr.length;
        int[] dp = new int[n + 1];
        int maxLen = 0;

        for (int num : arr) {
            dp[num] = dp[num - 1] + 1;
            maxLen = Math.max(maxLen, dp[num]);
        }

        return n - maxLen;
    }
}
