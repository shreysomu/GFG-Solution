class Solution {
public:
	int minStepToReachTarget(vector<int>&KnightPos, vector<int>&TargetPos, int N){
	    // Code here
	    {
	    queue<pair<vector<int>,int>> q;
	    q.push({KnightPos,0});
	    vector<pair<int,int>> moves = {{1,2},{2,1},{-1,2},{-2,1},{1,-2},{2,-1},{-1,-2},{-2,-1}};
	    
	    vector<vector<int>> used(N+1,vector<int>(N+1,INT_MAX));
	    
	    
	    while(q.size()){
	        
	        auto curr = q.front().first;
	        int move = q.front().second;
	        q.pop();
	        
	        if(curr==TargetPos)
	            return move;
	            
	        for(auto m : moves){
	            int i=curr[0]+m.first;
	            int j=curr[1]+m.second;
	            
	            if(i>0&&j>0&&i<=N&&j<=N&&used[i][j]>move+1){
	            used[i][j]=move+1;
	            q.push({{i,j},move+1});
	            }
	        }
	        
	    }
	}
  }
};
