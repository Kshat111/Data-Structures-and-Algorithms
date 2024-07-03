#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory for node with data "<<value<<" is released"<<endl;
    }
};

void insertAtTail(int value, Node* &tail){
    Node* temp=new Node(value);
    tail->next=temp;
    tail=temp;
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getLength(Node* &head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

Node* findMiddle(Node* &head){
    int length = getLength(head);
    int start =1;
    int positionOfMiddleNode=(start+length)/2;
    int valueOfMiddleNode;
    int count=0;
    Node*temp=head;
    while(temp!=NULL){
        if(count==positionOfMiddleNode){
            valueOfMiddleNode=temp->data;
        }
        temp=temp->next;
        count++;
    }
    Node* ans=new Node(valueOfMiddleNode);
    return ans;
}

int main(){
    Node* node = new Node(10);
    Node* head=node;
    Node* tail = node;
    insertAtTail(20, tail);
    insertAtTail(30, tail);
    insertAtTail(40, tail);
    insertAtTail(50, tail);
    insertAtTail(60, tail);
    insertAtTail(70, tail);
    insertAtTail(80, tail);
    // insertAtTail(90, tail);
    print(head);
    Node* middleNode =findMiddle(head);
    cout<<"Middle of the linked list is: "<<middleNode<<endl;

    return 0;
}