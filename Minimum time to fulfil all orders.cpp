class Solution{
    bool isPoss(vector<int>&A, int N, int lim) {
       int i = 0,  j = 1, tim = 0;
       while(N--) {
           while (i < A.size() && tim + A[i]*j > lim) {
               i++;
               j = 1;
               tim = 0;
           }
           if (i == A.size()) 
           return false;
           tim += A[i] * j++;
       }
       return true;
   }
    public:
    int findMinTime(int N, vector<int>&A, int L){
        //write your code here
        sort(A.begin(), A.end());
       int l = 0, mid=0;
       int h = (N * (N+1)/2) * A[0];
       while(l < h) {
           mid = l + (h - l)/2;
           if (isPoss(A, N, mid)) h = mid;
           else l = mid+1;
       }
       return l;
    }
};
