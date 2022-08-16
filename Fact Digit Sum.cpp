class Solution{
	public:
	vector<int> FactDigit(int N)
	{
	    // Code here
    vector <int> res, fac;
    fac.push_back(1);
    fac.push_back(1);
    for (int i = 2; i <= 9; i++)
        fac.push_back(fac[i-1] * i);
    
    int d = 9;
    while (N > 0)
    {
        if (fac[d] <= N)
        {
            N = N-fac[d];
            res.push_back(d);
        }
        else
            d--;
    }
    reverse(res.begin(), res.end());
    return res;
	}
};
