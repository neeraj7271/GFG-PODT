//User function Template for C++

class Solution{
     int ans[1001][1001];
  public:
  
    int solve(string s1, string s2, int n1, int n2) {
        
         if (n1 == 0 || n2 == 0) {
            return 0;
        }
        if (ans[n1][n2] != -1) {
            return ans[n1][n2];
        }
        if (s1[n1 - 1] == s2[n2 - 1]) {
            return ans[n1][n2] = 1 + solve(s1, s2, n1 - 1, n2 - 1);
        }
        else {
            return ans[n1][n2] = max(solve(s1, s2, n1 - 1, n2),
                                    solve(s1, s2, n1, n2 - 1));
        }
    }
  
    int longestPalinSubseq(string A) {
       
        int n = A.size();
        ans[n][n];
        memset(ans, -1, sizeof(ans));
        
        string B = A;
        reverse(B.begin(), B.end());
        
        return solve(B, A, n , n);
        
    }
};