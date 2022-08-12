class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
         string str1, str2 = str;
        sort(str2.begin(), str2.end());
     int lowIndex = count_if(str2.begin(), str2.end(), ::isupper);

    for(int i=0, j1=0, j2=lowIndex; i<str.length(); i++){
        if(islower(str[i]))
            str1+=str2[j2++];
        else
            str1+=str2[j1++];
    }
    return str1;
    }
};
