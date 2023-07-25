vector<int> solve(Node* root) {
    
    if(root == NULL) {
        return {};
    }
    
    vector<int> ans;
    queue<Node*> q;
    q.push(root);
    bool leftToRight = true;
    
    while(!q.empty()) {
        
        int size = q.size();
        vector<int> temp(size);
        
        for(int i=0; i<size; i++) {
            Node* frontNode = q.front();
            q.pop();   
            
            if(leftToRight == true) {
                temp[i] = frontNode -> data;
            }
             else {
                 temp[size - i - 1] = frontNode -> data;
             }
             
            if(frontNode -> right) {
            q.push(frontNode -> right);
            }
        
            if(frontNode -> left) {
                q.push(frontNode -> left);
            }
        }
        
        leftToRight = !leftToRight;
        
        for(int i=0; i<temp.size(); i++) {
            ans.push_back(temp[i]);
        }
    }
    return ans;
}

//Function to return a list containing the level order traversal in spiral form.
vector<int> findSpiral(Node *root)
{
    vector<int> ans = solve(root);
    return ans;
}
