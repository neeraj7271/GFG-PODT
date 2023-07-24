class Solution
{
    public:
     void insertAtTail(Node* &tail, Node* temp) {
      tail -> next = temp;
        tail = temp;
    }
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        if(head == NULL) {
            return head;
        }
        
        Node* zeroHead = new Node(-1);
        Node* zeroTail = zeroHead;
        Node* oneHead = new Node(-1);
        Node* oneTail = oneHead;
        Node* twoHead = new Node(-1);
        Node* twoTail = twoHead;
        
        
        Node* curr = head;
        
        while(curr != NULL) {
            
            Node* temp = new Node(curr -> data);
            
            if(curr -> data == 0) {
                
                insertAtTail( zeroTail, temp);
                curr = curr -> next;
            } 
            
            else if(curr -> data == 1) {
                insertAtTail( oneTail, temp);
                curr = curr -> next;
            }
            
            else {
                insertAtTail( twoTail, temp);
                curr = curr -> next;
            }
            
        }
        
            if(oneHead -> next != NULL) {
               zeroTail -> next = oneHead -> next;
                  }
                  else {
                      zeroTail -> next = twoHead -> next;
                  }
    
                 
                  oneTail -> next = twoHead -> next;
                  twoTail -> next = NULL;
                
                  head = zeroHead -> next;

    }
};
