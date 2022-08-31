class Solution {
public:
	vector<int> DistinctSum(vector<int>nums){
	    // Code here
	    int n= nums.size();
	    
	    int sum= accumulate(nums.begin(),nums.end(),0);
	    
	    bool dp[n+1][sum+1]={false};
	    
	    for(int i=0;i<=n;i++)
	    {
	        dp[i][0]=true;
	    }
	    
	    for(int j=1;j<=sum;j++)
	    {
	        dp[0][j]=false;
	    }
	    
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=1;j<=sum;j++)
	        {
	            if(nums[i-1]<=j)
	            {
	             dp[i][j]= (dp[i-1][j-nums[i-1]]||dp[i-1][j]);
	            }
	            else 
	            {
	              dp[i][j]= dp[i-1][j];
	            }
	        }
	    }
	    
	    vector <int> res;
	    
	    for(int i=0;i<=sum;i++)
	    {
	        if(dp[n][i])
	        {
	            res.push_back(i);
	        }
	    }
	    
	    return res;
	    
	}
	
};
