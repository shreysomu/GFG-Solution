class Solution {
    public int maximumSum(int[][] mat, int k) {
        int n = mat.length;

        // Prefix Sum Matrix
        int[][] prefix = new int[n + 1][n + 1];

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                prefix[i][j] = mat[i - 1][j - 1]
                             + prefix[i - 1][j]
                             + prefix[i][j - 1]
                             - prefix[i - 1][j - 1];
            }
        }

        int maxSum = Integer.MIN_VALUE;

        // Calculate sum of every k x k submatrix
        for (int i = 0; i <= n - k; i++) {
            for (int j = 0; j <= n - k; j++) {

                int sum = prefix[i + k][j + k]
                        - prefix[i][j + k]
                        - prefix[i + k][j]
                        + prefix[i][j];

                maxSum = Math.max(maxSum, sum);
            }
        }

        return maxSum;
    }
}
