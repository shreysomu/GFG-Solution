class Solution {
    int minEdgesReq(int n, int[][] edges) {
        // code here
List<Integer>[] adj = new ArrayList[n];
        for (int i=0; i<n; i++) {
            adj[i] = new ArrayList<>();
        }
        
        for (int[] edge: edges) {
            int u = edge[0];
            int v = edge[1];
            
            adj[u].add(v);
            adj[v].add(u);
        }
        
        int comp  = 0;
        int[] vis = new int[n];
        
        for (int i=0; i<n; i++) {
            if (vis[i] == 0) {
                dfs(i, adj, vis);
                comp++;
            }
        }
        
        int m = edges.length;
        if (m < n -1) return -1;
        return comp -1;
    }
    
    private void dfs(int node, List<Integer>[] adj, int[] vis) {
        vis[node] = 1;
        
        for (int adjNode: adj[node]) {
            if (vis[adjNode] == 0) {
                dfs(adjNode, adj, vis);
            }
        }
    }
}
