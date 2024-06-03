//QUITE IMPORTANT!!!!!!!!!!!


/*
bool detectLoop(Node* &head){

    map<Node*,bool> visited;
    if(head==NULL){
        return false;
    }
    Node* temp=head;
    while(temp!=NULL){
        if(visited[temp]==true){
            return true;//to avoid being stuck in infinite loop
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}
Node* floydLoopDetection(Node* &head){
    if(head==NULL){
        return NULL;
    }
    Node* slow=head;
    Node* fast=head;
    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
    }
    if(slow==fast){
        return slow;
        cout<<"Cycle present at: "<<slow->data<<endl;
    }
    return NULL;
}
Node* getStartingNodeInTheLoop(Node* &head){
    if(head==NULL){
        return NULL;
    }
    Node* intersection=floydLoopDetection(head);
    Node*slow=head;
    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}
Node* removeLoop(Node*head){
    if(head==NULL){
        return NULL;
    }
    Node* startOfLoop=getStartingNodeInTheLoop(head);
    Node*temp=startOfLoop;
    while(temp->next!=startOfLoop){ 
        temp=temp->next;
    }
    temp->next=NULL;
    return head;
}
*/