class Solution{
public:
    /*You are required to complete this method*/
    bool static comp(struct val x,struct val y){
        
       return x.second<y.second;
    }
    int maxChainLen(struct val p[],int n){
        //Your code here
         sort(p,p+n,comp);
        int l=1,P=p[0].second;
          for(int i=1;i<n;i++){
              if(p[i].first>P){
            P=p[i].second; 
              l++;
           }
    }
    return l;
    }
};
