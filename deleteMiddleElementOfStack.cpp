class Solution
{
    public:
    
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        int mid =( sizeOfStack + 1 ) / 2;
        if(mid == s.size()) {
            int temp = s.top();
            s.pop();
            return;
        }
        
        int top = s.top();
        s.pop();
        
        deleteMid(s, sizeOfStack);
        s.push(top);
    }
};