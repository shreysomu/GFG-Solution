class Solution {

    public ArrayList<ArrayList<Integer>> shortestDist(int[][] mat) {

        int n = mat.length;

        int[][] sol = new int[n][n];
        int[][] dp = new int[n][n];

        for (int i = 0; i < n; i++) {
            Arrays.fill(dp[i], -1);
        }

        ArrayList<ArrayList<Integer>> ans = new ArrayList<>();

        if (solve(mat, sol, dp, 0, 0, n)) {

            for (int i = 0; i < n; i++) {
                ArrayList<Integer> row = new ArrayList<>();

                for (int j = 0; j < n; j++) {
                    row.add(sol[i][j]);
                }

                ans.add(row);
            }

            return ans;
        }

        ArrayList<Integer> row = new ArrayList<>();
        row.add(-1);
        ans.add(row);

        return ans;
    }

    static boolean solve(int[][] mat, int[][] sol,
                         int[][] dp, int i, int j, int n) {

        if (i == n - 1 && j == n - 1) {
            sol[i][j] = 1;
            return true;
        }

        if (i >= n || j >= n || mat[i][j] == 0)
            return false;

        if (dp[i][j] != -1)
            return dp[i][j] == 1;

        sol[i][j] = 1;

        int jump = mat[i][j];

        for (int k = 1; k <= jump; k++) {

            if (solve(mat, sol, dp, i, j + k, n) ||
                solve(mat, sol, dp, i + k, j, n)) {

                dp[i][j] = 1;
                return true;
            }
        }

        sol[i][j] = 0;
        dp[i][j] = 0;

        return false;
    }
}
