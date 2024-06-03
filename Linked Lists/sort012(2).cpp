//sorting 0,1,2 without replacing data, instead repositioning pointers
/*
void insertAtTail(Node* &tail,Node* curr){
    tail->next=curr;
    tail=curr;
}
Node* sortList(Node *head){
    // Write your code here.
    Node* zeroHead=new Node(-1);
    Node* zeroTail=zeroHead;
    Node* oneHead=new Node(-1);
    Node* oneTail=oneHead;
    Node* twoHead=new Node(-1);
    Node* twoTail=twoHead;

    Node* curr=head;
    //creating separate linked lists for 0,1,2
    while(curr!=NULL){
        int value=curr->data;
        if(value==0){
            insertAtTail(zeroTail,curr);
        }
        else if(value==1){
            insertAtTail(oneTail, curr);
        }
        else if(value==2){
            insertAtTail(twoTail, curr);
        }
        curr=curr->next;
    }
    //merging three LL
    if(oneHead->next!=NULL){
        zeroTail->next=oneHead->next;
    }
    else{
        zeroTail->next=twoHead->next;
    }
    oneTail->next=twoHead->next;
    twoTail->next=NULL;

    //head setup
    head=zeroHead->next;
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
    
}
*/