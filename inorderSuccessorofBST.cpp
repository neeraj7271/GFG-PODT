class Solution{
  public:
  
    void inorder(Node* root, vector<Node*> &ans) {
        if(root == NULL) {
            return NULL;
        }
        
        inorder(root -> left, ans);
        ans.push_back(root);
        inorder(root -> right, ans);
    }
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        vector<Node*> ans;
        inorder(root, ans);
        
        int n = ans.size();
        
        for(int i=0; i<n; i++) {
            if(ans[i] -> data == x -> data) {
                return ans[i+1] -> data;
            }
        }
        
        return NULL;
    }
};