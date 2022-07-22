class Solution {
  public:
  void doDFS(vector<vector<int>> &adj, vector<bool> &visited, int i){
        visited[i] = true;
        for(int j = 0; j < adj[i].size(); j++){
            if(adj[i][j] == 1 && visited[j] == false){
                doDFS(adj, visited, j);
            }
        }
    }
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
                vector<bool> visited (V, false);
        int res = 0;
        for(int i = 0; i < V; i++){
            if(visited[i] == false){
                res++;
                doDFS(adj, visited, i);
            }
        }
        return res;

    }
};
