  
    #include<vector>
int maxPalindrome(Node *head){
      //Your code here
    vector<int>v;
    while(head){
        v.push_back(head->data);
        head=head->next;
    }
    int n=v.size();
    vector<vector<bool>>dp(n,vector<bool>(n,false));
    for(int i=0;i<n;i++){
        dp[i][i]=1;
    }
    int res=1;
    for(int i=0;i<n-1;i++){
        if(v[i]==v[i+1]){
            dp[i][i+1]=true;
            res=2;
        }
    }
    for(int k=3;k<=n;k++){
        for(int i=0;i<=n-k+1;i++){
            int j=i+k-1;
            if(v[i]==v[j] and dp[i+1][j-1]){
                dp[i][j]=1;
                res=max(res,k);
            }
        }
    }
    return res;
}
