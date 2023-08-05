class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    
        sort(a.begin(), a.end());
        int ans = INT_MAX;
        
        for(int i = 0; i<=n-m; i++) {
            
            int mini = a[i];
            
            int maxi = a[i+ m - 1];
            
            int diff = maxi - mini;
            
            if(diff < ans) {
                
                ans = diff;
            }
            
        }
        
        return ans;
    
    }   
};