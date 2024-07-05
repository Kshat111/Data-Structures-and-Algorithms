#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node (int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        int val = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<endl<<"Memory is free for node with data: "<<val<<endl;
    }
};

void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head=temp;
}

void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail=temp;
}

void printLinkedList(Node* &head){
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int length(Node* &head){
    int count=0;
    Node* temp= head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

void insertAtPosition(int position, int data, Node* &head, Node* &tail){
    if(position==1){
        insertAtHead(head, data);
        return;
    }
    Node * temp =head;

    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }

    if(temp->next==NULL){
        insertAtTail(tail, data);
        return;
    }

    Node* newNode=new Node(data);
    newNode->next=temp->next;
    temp->next=newNode;
}

void deleteNode(int position, Node* &head){
    if(position==1){
        Node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

    // deleting non head
    else{
        Node* curr=head;
        Node* prev = NULL;
        int count=1;
        while(count<position){
            prev=curr;
            curr=curr->next;
            count++;
        }
        
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

void deleteNodeByValue(int value, Node* &head){
    if(head->data==value){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node* curr=head;
        Node* prev=NULL;
        while(curr!=NULL){
        
            if(curr->data==value){
                prev->next=curr->next;
                curr->next=NULL;
                delete curr;
                return;
            }
            prev=curr;
            curr=curr->next;
        }
        cout<<"Entered value doesn't exist"<<endl;
    }
}

int main() {
    Node* node = new Node(2);
    Node* head = node;
    Node* tail = node;
    insertAtHead(head, 4);
    insertAtHead(head, 6);
    insertAtHead(head, 8);
    insertAtHead(head, 10);

    insertAtTail(tail, 1);
    insertAtTail(tail, 3);
    insertAtTail(tail, 5);
    insertAtTail(tail, 7);


    cout<<"Linked list: "<<endl;
    printLinkedList(head);
    cout<<endl;

    int len=length(head);
    cout<<"Length of the linked list is: "<<len<<endl;

    insertAtPosition(5, 87, head, tail);
    printLinkedList(head);

    deleteNode(9, head);
    printLinkedList(head);

    deleteNodeByValue(10, head);
    printLinkedList(head);

    // delete node;

    return 0;
}