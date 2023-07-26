Node* solve(Node* root, int &k, int node) {

    if(root == NULL) {
        return NULL;
    }    
    
    if(root -> data == node) {
        return root;
    }
    
    Node* leftAns = solve(root -> left, k, node);
    Node* rightAns = solve(root -> right, k, node);
    
    if(leftAns == NULL && rightAns == NULL) {
        return NULL;
    }
    
    else if(leftAns != NULL && rightAns == NULL) {
        k--;
        
        if(k == 0) {
            
            return root;
        }
        return leftAns;
    }
    
    else if(leftAns == NULL && rightAns != NULL) {
        k--;
        if(k == 0) {
            
            return root;
        }
        
        return rightAns;
    }
    
}


int kthAncestor(Node *root, int k, int node)
{
    if(root == NULL) {
        return -1;
    }
    
    Node* ans = solve(root, k, node);
    
    if(ans == NULL || ans->data == node) {
        return -1;
    }
    
    else {
        return ans -> data;
    }
}
