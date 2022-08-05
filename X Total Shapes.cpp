class Solution
{
    public:
    //Function to find the number of 'X' total shapes.
   void totalcount(int r,int c,vector<vector<char>> &grid)
    {
        if(r>=grid.size() || c>=grid[0].size() || r<0 || c<0)
            return;
        if(grid[r][c]=='O')
            return;
        if(grid[r][c]=='X')
            grid[r][c]='O';
            
        totalcount(r+1,c,grid);
        totalcount(r-1,c,grid);
        totalcount(r,c+1,grid);
        totalcount(r,c-1,grid);
    }
    int xShape(vector<vector<char>>& grid) 
    {
        // Code here
        int count=0;
        int row=grid.size();
        int col=grid[0].size();
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]=='X')
                {
                    totalcount(i,j,grid);
                    count++;
                }
            }
        }
        return count;
    }
};
