class Solution {
  public:

        
     void factor(vector<int>&arr, int n)
  {
      for(int i = 1;i*i<=n;i++)
      {
          if(n%i == 0)
          {
              arr.push_back(i);
              if((n/i) != i)
                arr.push_back(n/i);
          }
      }
      return;
  }
  
      int solve(int N, int K, vector<int> &arr) {
        // code here
        int s = 0;
        for(int i = 0;i<N;i++) 
        s  += arr[i];
        
        vector<int> num;
        factor(num, s);
        int res = 1;
        for(int i = 0;i<num.size();i++)
        {
            int tmp = num[i], Sum = 0;
           s = 0;
            for(int j = 0;j<N;j++)
            {
                Sum += arr[j];
                if(Sum%tmp == 0)   
                    s++;
            }
                
            if(s >= K)    
            res = max(res, tmp);
        }
        return res;
    }
};
