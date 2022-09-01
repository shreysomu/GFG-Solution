class Solution {
  public:
    long long int nthFibonacci(long long int n){
        // code here
       # define m 1000000007;
            
        long long  int a = 0;
        long long int b = 1;
        
        for (int i = 2; i <= n; i++){
            long long int c = (a+b) % m;
            a = b;
          b = c;
        }
        
        return b;      
    }
};
