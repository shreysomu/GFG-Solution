    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int max_so_for=arr[0],sum=0;
       for(int i=0;i<n;i++) //maximizing sum
       {
           sum+=arr[i];
            if(sum<=0)
               sum=0;
               
           if(sum>max_so_for)
               max_so_for=sum;

       }
       return max_so_for;
       
        
    }
};
