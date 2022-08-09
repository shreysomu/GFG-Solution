class Solution{   
public:
    long long int nineDivisors(long long int N){
        //Code Here
        int count=0;
        //UpperLimit=U
       int U=sqrt(N);
       int prime[U+1];
       for(int i=1;i<=U;i++)
           prime[i]=i;
       for(int i=2;i*i<=U;i++){
           if(prime[i]==i){
               for(int j=i*i;j<=U;j=j+i)
                   if(prime[j]==j)
                       prime[j]=i;
           }
       }
       for(int i=2;i<=U;i++){
           int A=prime[i];
           int B=prime[i/prime[i]];
           if(A*B==i and B!=1 and A!=B){
               count=count+1;
           }
           else if(prime[i]==i){
               if(pow(i,8)<=N){
                   count=count+1;
               }
           }
       }
       return count;
    }
};
