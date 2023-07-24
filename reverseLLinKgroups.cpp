class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        if(head ==  NULL || head -> next == NULL) {
            return head;
        }
        
        int cnt = 0;
        
        struct node* curr = head;
        struct node* prev = NULL;
        struct node* forward = NULL;
        
        while(cnt < k && curr != NULL) {
            
            forward = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forward;
            cnt++;
        }
        
        if(forward != NULL) {
            
        head -> next = reverse(curr , k);
        }
        
        
        return prev;
    }
};