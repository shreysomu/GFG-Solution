class Solution{
public:
  vector<int> maximumToys(int N,vector<int> A,int Q,vector<vector<int>> Queries){
      // code here

       vector<int> res(Q);
    vector<long long> pre(N);   //pre=prefix
    vector<pair<int, int>> a(N);
    for (int i = 0; i < N; i++)
    {
        a[i] = {A[i], i};
    }
    sort(a.begin(), a.end());
    unordered_map<int, int> mp;
    for (int i = 0; i < N; i++)
    {
        mp[a[i].second] = i;
    }
    long long Sum = 0;
    for (int i = 0; i < N; i++)
    {
        Sum += a[i].first;
        pre[i] = Sum;
    }
    for (int m = 0; m < Q; m++)
    {
        int money = Queries[m][0];
        int K = Queries[m][1];
        int index = upper_bound(pre.begin(), pre.end(), money) - pre.begin();
        vector<int> V(K);
        for (int i = 0; i < K; i++)
        {
            V[i] = mp[Queries[m][i + 2] - 1];
        }
        sort(V.begin(), V.end());
        int cnt = 0, j;
        for (int i = 0; i < K; i++)
        {
            j = V[i];
            if (j < index)
            {
                cnt++;
                money += a[j].first;
                index = upper_bound(pre.begin(), pre.end(), money) - pre.begin();
            }
        }
        res[m] = index - cnt;
    }
    return res;
  }
};
