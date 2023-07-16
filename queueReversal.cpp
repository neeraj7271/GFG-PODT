//Function to reverse the queue.
class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        queue<int> ans;
        stack<int> s;
        
        while(!q.empty()) {
            int val = q.front();
            q.pop();
            s.push(val);
        }
        
        while(!s.empty()) {
            int top = s.top();
            s.pop();
            ans.push(top);
        }
        
        return ans;
    }
};