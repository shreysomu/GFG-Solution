class Solution{
	
	
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
		// Your code goes here
		set<int>S;
		for(int i=0;i<n;i++)
		 S.insert(arr[i]);
		 for(int i=A;i<=B;i++)
		 
		 {
		     if(S.find(i)==S.end())
		     return false;
		 }
		return true;
	}


		 

};
