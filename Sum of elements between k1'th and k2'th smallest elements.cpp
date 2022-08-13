class Solution{
    public:
    long long sumBetweenTwoKth( long long a[], long long n, long long K1, long long K2)
    {
        // Your code goes here
        
         sort(a,a+n);
       int ans =0;
       for(int i = K1; i<K2-1; i++){
           ans += a[i];
       }
       return ans;
    }
};
