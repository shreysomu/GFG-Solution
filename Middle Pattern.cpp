//{ Driver Code Starts
#include <iostream>
using namespace std;

void printPattern(string s);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin>>s;
	printPattern(s);
	cout<<endl;
	
}
	
	return 0;
}
// } Driver Code Ends


/*method prints the given pattern in a single line */
void printPattern(string s)
{
   //Your code here
    string str="";
    int size=s.size();
    int mid=s.size()/2;
    for(int i=mid;i<size;i++){
        str+=s[i];
        cout<<str<<"$"<<" ";
        
    }
    for(int i=0;i<mid;i++){
        str+=s[i];
        cout<<str<<"$"<<" ";

    }
}
