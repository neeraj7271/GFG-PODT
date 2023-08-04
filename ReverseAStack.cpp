class Solution{
public:
    void Reverse(stack<int> &St){
        vector<int> ans;
        
        while(!St.empty()) {
            
            int val = St.top();
            St.pop();
            ans.push_back(val);
        }
        
        for(int i = 0; i<ans.size(); i++) {
            int val = ans[i];
            St.push(val);
        }
    }
};