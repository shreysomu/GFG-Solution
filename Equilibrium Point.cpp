    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int totalSum = 0;
        int i;
        for( i = 0;i<n;i++){
            totalSum = totalSum + a[i];   //Calculating Total sum of array
        }
        
        int Frontsum = 0;
        for( i = 0;i<n;i++){
            totalSum = totalSum - a[i];  // 
            if(Frontsum == totalSum){
                return i+1;
            }
            
           Frontsum = Frontsum + a[i];  //
        }
        
        return -1;
    }

};
