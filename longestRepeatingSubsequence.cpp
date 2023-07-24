class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		   int n = str.length();
		   
		   int ans[n+1] = {0};
		   
		   for(int i=1; i<=n; i++) {
		       
		       int temp[n+1] = {0};
		       
		       for(int j=1; j<=n; j++) {
		           
		           if(str[i-1] == str[j-1] && i != j) {
		               temp[j] = 1 + ans[j-1];
		           }
		           else {
		               temp[j] = max(ans[j], temp[j-1]);
		           }
		       }
		       
		       for(int j=0; j<=n; j++) {
		           ans[j] = temp[j];
		       }
		   }
		   return ans[n];
		}

};