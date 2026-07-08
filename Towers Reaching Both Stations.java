class Solution {
    
    int[] dr = {-1, 1, 0, 0};
    int[] dc = {0, 0, -1, 1};
    public int countCoordinates(int[][] mat) {
        // code here
         int n = mat.length;
        int m = mat[0].length;

        boolean[][] vis1 = new boolean[n][m];
        boolean[][] vis2 = new boolean[n][m];

        // Station 1: top row + left column
        for (int i = 0; i < n; i++) {
            dfs(mat, vis1, i, 0);
        }

        for (int j = 0; j < m; j++) {
            dfs(mat, vis1, 0, j);
        }

        // Station 2: bottom row + right column
        for (int i = 0; i < n; i++) {
            dfs(mat, vis2, i, m - 1);
        }

        for (int j = 0; j < m; j++) {
            dfs(mat, vis2, n - 1, j);
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (vis1[i][j] && vis2[i][j]) {
                    ans++;
                }
            }
        }

        return ans;
    }

    private void dfs(int[][] mat, boolean[][] vis, int r, int c) {

        if (vis[r][c]) return;

        vis[r][c] = true;

        int n = mat.length;
        int m = mat[0].length;

        for (int k = 0; k < 4; k++) {

            int nr = r + dr[k];
            int nc = c + dc[k];

            if (nr >= 0 && nr < n &&
                nc >= 0 && nc < m &&
                !vis[nr][nc] &&
                mat[nr][nc] >= mat[r][c]) {

                dfs(mat, vis, nr, nc);
            }
        }
    }
}
