class Solution {
  public:
    int BasicDataType(string s) {
        // code here
        int n=s.length();
        
        if(n==1)
        
        {
            if(s[0]>='0'&&s[0]<='9')
            return sizeof(int);
            else
            return sizeof(char);
        }
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.')
            {
                if((n-1-i)>=6)
                {
                    return sizeof(double);
                    
                }
                else
                return sizeof(float);
            }
            
        }
        return sizeof(int);

    }
};
