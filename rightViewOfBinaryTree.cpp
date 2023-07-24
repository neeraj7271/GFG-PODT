class Solution
{
    public:
    
    vector<int> solve(Node* root) {
        if(root == NULL){
            return {};
        }
        
        vector<int> ans;
        map<int, int> rightNode;
        queue<pair<Node*, int> >q;
        q.push(make_pair(root, 0));
        
        
        while(!q.empty()) {
            
            pair<Node*, int> temp = q.front();
            q.pop();
            Node* frontNode = temp.first;
            int lvl = temp.second;
            
            
            if(rightNode.find(lvl) == rightNode.end()) {
                rightNode[lvl] = frontNode -> data;
            }
            
            
            if(frontNode -> right) {
                q.push(make_pair(frontNode -> right, lvl+1));
            }
            
            if(frontNode -> left) {
                q.push(make_pair(frontNode -> left, lvl+1));
            }
        }
        
        for(auto i: rightNode) {
            ans.push_back(i.second);
        }
        
        return ans;
        
    }
    
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
      vector<int> ans = solve(root);
      
      return ans;
    }
};