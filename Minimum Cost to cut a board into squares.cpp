class Solution {
public:
    int minimumCostOfBreaking(vector<int> X, vector<int> Y, int M, int N){
        //Write your code here
        sort(X.begin(),X.end());
       sort(Y.begin(),Y.end());
       int hor_count=1;
       int vert_count=1;
       int res=0;
       int i=M-2,j=N-2;
        while(i>=0 && j>=0)
        {
            if(X[i] >= Y[j]){
                res+=(X[i] * hor_count);
                vert_count++;
                i--;
            }
            else{
                res+=(Y[j] * vert_count);
                hor_count++;
                j--;
            }
        }
        while(i>=0){
            res+=(X[i] * hor_count);
            i--;
        }
        while(j >= 0){
            res+=(Y[j] * vert_count);
            j--;
        }
        return res;
    }
    
};
