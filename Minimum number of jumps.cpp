class Solution{
 public:
   int minJumps(int arr [],int n ){
        // Your code here
      
        int jumps=0, currMax =0,currReach=0;
        for(int i=0;i<n-1;i++){
            if(i+arr[i]>currMax)
              currMax = i+ arr[i];
              
             if(i==currReach){
                 jumps++;
                 currReach = currMax;
             }
             if(arr[i]==0 && i==currMax)
               return -1;
        }
         return jumps;
        
    }
};
