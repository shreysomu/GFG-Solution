class Solution {
    int cntOnes(int[][] grid) {
        // code here
        
          for(int i=0;i<grid.length;i++){
            for(int j=0;j<grid[0].length;j++){
                if((i-1<0 || j-1<0 || i+1 == grid.length || j+1 == grid[0].length) 
                                    && grid[i][j] == 1 ){
                    DFS(grid,i,j);
                }
            }
        }
        int count = 0;
        for(int i=0;i<grid.length;i++){
            for(int j=0;j<grid[0].length;j++){
                if(grid[i][j] == 1){
                    count++;
                }
            }
        }
        return count;
    }
    public static void DFS(int grid[][] , int i,int j){
        
        if(i<0 || j<0 || i>=grid.length || j>=grid[0].length || grid[i][j] == -1 ){
            return ;
        }
        if(grid[i][j] == 0){
            return ;
        }
        
        grid[i][j] = -1;
        
        DFS(grid,i-1,j);
        DFS(grid,i+1,j);
        DFS(grid,i,j-1);
        DFS(grid,i,j+1);
        
    }
};
