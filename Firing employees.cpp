      class Solution{   
       public:
     bool isPrime(int num) {
        if(num <= 1) return false;
        if (num <= 3)  return true; 
        
        int range = sqrt(num);
        // This is checked so that we can skip 
        // middle five numbers in below loop 
        if (num % 2 == 0 || num % 3 == 0) 
            return false; 
        

        for (int i = 5; i <= range; i += 6) 
            if (num % i == 0 || num % (i + 2) == 0) 
                return false; 
        
        return true;
    }
    int firingEmployees(vector<int> &arr, int n){
        // code here     
        unordered_map<int,vector<int>> mp;
        int emp=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
            mp[arr[i]].push_back(i+1);
            else
            emp=i+1;
            
        }
        
        queue<int> q;
        for(auto it:mp[emp])
        q.push(it);
        
        int seniors=0;
        int count=0;
        while(!q.empty())
        {
             seniors++;
            int sz=q.size();
            for(int i=0;i<sz;i++)
            {
                int ind=q.front();
                q.pop();
                if(isPrime(ind+seniors))
                count++;
                
                  for(auto it:mp[ind])
                 q.push(it);
            }
            
          
        }
        
        return count;
    }
};
