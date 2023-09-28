class Solution
{
public:
    int setKthBit(int N, int K)
    {
        // Write Your Code here
        int mask = 1<<K;
        int ans = N | mask;
        return ans;
    }
    
};




ORRRRRR

1 Line solution :
   return N|(1<<K);
