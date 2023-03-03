class Solution{
public:
    vector<long long int> minimumSquares(long long int L, long long int B)
    {
        // code here
         vector<long long int>res;
        long long int r = __gcd(L,B);
        res.push_back((L*B)/(r*r));
        res.push_back(r);
        return res;
    }
};
