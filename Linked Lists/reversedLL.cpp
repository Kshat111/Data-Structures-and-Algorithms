/*
Node* reverse(Node* head) {
        
        Node*curr=head;
        Node*next=NULL;
        Node*prev=NULL;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
*/