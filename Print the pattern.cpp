class Solution{
public:
    vector<string> pattern(int n){
        // code here
        
        vector<string>S;
        int c =0;
        for(int i=0; i<n; i++)
        {
            S.push_back("");
            for(int d=1; d<=2*i; d++)
            {
                S[i]+='-';
            }
            for(int j=i; j<n; j++)
            {
                c++;
                S[i]+=to_string(c)+'*';
            }
        }
        for(int i=n-1, j=1; i>=0; i--, j++)
        {
            for(int k=j; k>0; k--)
            {
                c++;
              S[i]+=to_string(c);
                if(k!=1)
              S[i]+='*';
            }
        }
        return S;
    }
};
