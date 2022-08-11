class Solution {
public:
    int maxCoins(vector<int>&A,int n)
        {
	       //Write your code here
	         int dp[n][n];
	     
             for (int i = 0; i <n; ++i)
            {
               dp[i][i]=A[i];
               
                 if(i<n-1)
                   dp[i][i+1]=max(A[i],A[i+1]);
            }
    
               int X;
               if(n%2)
               X=2;
              else X=3;
        
                for (; X <n ; X+=2)
                 {
                     
                   for (int i = 0; X+i<n; ++i)
                   
               {
                      int j=X+i;
                      
                   dp[i][j]=max(A[i]+min(dp[i+2][j],dp[i+1][j-1]),
                      A[j]+min(dp[i+1][j-1],dp[i][j-2]));
                }
            }
                return dp[0][n-1];
        }
    
   };
