class Solution{
    public:
    //Complete this function
    
    void solve(string str, int s, int e, vector<string> &ans)
    {
        if(s == e) {
            ans.push_back(str);
        }
        
        else {
            
        for(int i = s; i<=e; i++) {
            
            swap(str[s], str[i]);
            
            solve(str, s+1, e, ans);
            
            swap(str[s], str[i]);
        
            
        }
        
        }
    }
    
    vector<string> permutation(string S)
    {
        vector<string> ans;
        
        int s = 0;
        int e = S.length();
        
        solve(S, s , e-1 , ans);
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};

