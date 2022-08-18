class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
         int res=0,sum=0;
        unordered_map<int,int> mp;
        mp[0]=-1;
        for(int i=0;i<N;i++){
            sum+=A[i];
            if(mp.find(sum-K)!=mp.end())
                res=max(res,i-mp[sum-K]);
            if(mp.find(sum)==mp.end())
                mp[sum]=i;
        }
        return res;
    } 

};
