#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
    //destructor
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is freed for node with data: "<<value<<endl;
    }
};
void insertAtHead(Node* &head, Node* &tail,int d){
    //empty list
    if(head==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
        Node* temp=new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }

}
void insertAtTail(Node* &head, Node* &tail,int d){
    //empty list
    if(tail==NULL){
        Node* temp=new Node(d);
        tail=temp;
        head=temp;
    }
    else{
        Node *temp=new Node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
        
    }
}
void insertAtPosition(Node* &tail,Node* & head, int position,int d){
    //insertion at head
    if(position==1){
        insertAtHead(head,tail,d);
        return;
    }
    //traversal
    Node*temp=head;
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    //insertion at tail
    if(temp->next==NULL){
        insertAtTail(head,tail,d);
        return;
    }
    //node creation
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;

}
void deleteNode(int position, Node* &head, Node* &tail) {
    // deletion at head
    if (position == 1) {
        Node* temp = head;
        head = temp->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
    }
    // deletion at non-head
    else {
        Node* curr = head;
        int count = 1;
        while (count < position) {
            curr = curr->next;
            count++;
        }

        if (curr == NULL) {
            return; // Invalid position, node not found
        }

        if (curr->prev != NULL) {
            curr->prev->next = curr->next;
        }
        if (curr->next != NULL) {
            curr->next->prev = curr->prev;
        }

        if (curr == tail) {
            tail = curr->prev;
        }

        curr->prev = NULL;
        curr->next = NULL;
        delete curr;
    }
}

int getLength(Node* &head){
    int length=0;
    Node*temp=head;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
}
void print(Node* &head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* node1=new Node(19);
    Node* head=node1;
    Node* tail=node1;
    print(head);

    //cout<<"Length of DLL is: "<<getLength(head)<<endl;

    insertAtHead(head,tail,21);
    print(head);

    insertAtHead(head,tail,23);
    print(head);

    insertAtHead(head,tail,25);
    print(head);

    insertAtHead(head,tail,27);
    print(head);

    insertAtTail(tail,tail,29);
    print(head);

    insertAtTail(tail,tail,31);
    print(head);

    insertAtPosition(tail,head,4,33);
    print(head);

    insertAtPosition(tail,head,1,35);
    print(head);
    
    insertAtPosition(tail,head,7,37);
    print(head);
    // cout<<"Head: "<<head->data<<endl;
    // cout<<"Tail: "<<tail->data<<endl;
    deleteNode(1,head,tail);
    print(head);

    deleteNode(9,head,tail);
    print(head);
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;



    return 0;
}