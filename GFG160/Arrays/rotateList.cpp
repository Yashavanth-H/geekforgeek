class Solution {
  public:
    Node* rotate(Node* head, int k) {
        // Your code here
        if(!head || !head->next || k==0)
            return head;
        
        Node* temp = head;
        int length = 1;
        while (temp->next){
            temp=temp->next;
            length++;
        }
        k=k%length;
        if(k==0)
            return head;
            
            temp=head;
            for(int i=1; i<k; i++){
                temp=temp->next;
            }
            Node* newHead=temp->next;
            temp->next=NULL;
            Node* end=newHead;
            while(end->next){
                end=end->next;
            }
            end->next=head;
            return newHead;
    }
};