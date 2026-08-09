class Solution {
    
     private static boolean isSafeToMove(int newX, int newY,int n,int[][] maze , boolean[][] visited) {
        if(newX < 0 || newY < 0 || newX >=n || newY >=n){

            //out of bound case
            return false;
        }

       else if (maze[newX][newY]==0){
           //bocked sell case
            return false;
        }

        else if(visited[newX][newY] == true){
            //already visited case
            return false;
        }

        else {
            return true;
        }
    }

  
    static void solve(int[][] maze , int srcX, int srcY, int destX, int destY, boolean[][] visited, ArrayList<String> ans, String path){
        //baseCase
        if(srcX == destX  && srcY == destY){
            ans.add(path);
            return;
        }

        int n = maze.length;

        visited[srcX][srcY] = true;

        //4 movements
        //up
        int newX = srcX-1;
        int newY = srcY;
        if(isSafeToMove(newX,newY,n,maze,visited)){
            //baki recursion sambhal lega
            solve(maze,newX,newY,destX,destY,visited,ans,path+"U");
        }

        //down
        newX = srcX+1;
        newY = srcY;

        if(isSafeToMove(newX,newY,n,maze,visited)){
            //baki recursion sambhal lega
            solve(maze,newX,newY,destX,destY,visited,ans,path+"D");
        }

        //left
        newX = srcX;
        newY = srcY-1;

        if(isSafeToMove(newX,newY,n , maze ,visited)){
            //baki recursion sambhal lega
            solve(maze,newX,newY,destX,destY,visited,ans,path+"L");
        }

        //Right
        newX = srcX;
        newY = srcY+1;

        if(isSafeToMove(newX,newY , n, maze ,visited)){
            //baki recursion sambhal lega
            solve(maze,newX,newY,destX,destY,visited,ans,path+"R");
        }


        //all 4 directions chosen then we need to returnr
        //undo step ---->>backTracking step
        visited[srcX][srcY] = false;
    }

   
    static ArrayList<String> ratInMaze(int[][] maze){
        ArrayList<String> ans = new ArrayList<>();
        int srcX = 0;
        int srcY = 0;
        int n = maze.length;
        int destX = n-1;
        int destY = n-1;
        boolean[][] visited = new boolean[n][n];
        String path = "";

        //if src location cell is blocked cell or dest is a blocked cell
        if (maze[0][0] == 0 || maze[n-1][n-1] == 0){
            return ans;
        }
        solve(maze,srcX,srcY,destX,destY,visited,ans,path);
        Collections.sort(ans);
        return ans;
    }
}
