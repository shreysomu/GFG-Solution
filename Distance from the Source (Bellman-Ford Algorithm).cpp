class Solution{
	public:
	/*  Function to implement Dijkstra
    *   adj: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */
    vector <int> bellman_ford(int V, vector<vector<int>> adj, int Source) {
        // Code here
           vector<int> dp(V, 100000000);
        dp[Source] = 0;
        for(int i = 0; i < V; i++){
            for(int j = 0; j < adj.size(); j++){
                if(dp[adj[j][0]] != 100000000){
                    dp[adj[j][1]] = min(dp[adj[j][1]], dp[adj[j][0]] + adj[j][2]);
                }
            }
        }
        return dp;
    }
  
