Solution 1 : 
class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        //code here
        
        vector<int>res;
        int i = 0,j = m-1,sum = 0 ;
        int dif = INT_MAX;
        
        int a = 0;
        int b = 0;
        while(i<n && j>=0){
            sum = arr[i]+brr[j];
            
            if(abs(sum-x)<dif){
                dif = abs (sum-x);
                a = arr[i];
                b = brr [j];
            }
            
            if(sum>x){
                j--;
            }
            else
               i++;
        }
        res.push_back(a);
        res.push_back(b);
        
        return res;
    }
};


Solution 2 : 

        vector<int> res;
        int i = 0, j = m - 1;
        int diff = INT_MAX;

        while (i < n && j >= 0) {
            int currentSum = arr[i] + brr[j];
            if (abs(currentSum - x) < diff) {
                diff = abs(currentSum - x);
                res = {arr[i], brr[j]};
            }

            if (currentSum > x) {
                j--;
            } else {
                i++;
            }
        }

        return res;
    }
};
