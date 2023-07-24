class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
      if(head == NULL && head -> next == NULL) {
          return head;
      }
      
      map<int, bool> visited;
      Node* curr = head;
      Node* prev = NULL;
      
      
      while(curr  != NULL) {
          
         if(visited[curr -> data] == true) {
            
            Node* temp = curr;
            prev -> next = curr -> next;
            curr = curr -> next;
            delete(temp);
            
         } 
         
         else {
             visited[curr -> data] = true;
             prev = curr;
             curr = curr -> next;
         }
         
      }
      return head;
    }
};