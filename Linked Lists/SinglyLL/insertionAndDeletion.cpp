#include <iostream>
#include<map>
using namespace std;
class Node{

    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
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
void insertAtHead(Node* &head,int d){
    //first create a new node
    Node*temp=new Node(d);
    //then point temp to head
    temp->next=head;
    //then point head to temp
    head=temp;
}
void insertAtTail(Node* &tail,int d){
    //first create a new node
    Node*temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void insertAtPosition(Node* &tail,Node*&head,int position,int d){
    
    //inserting at head
    if(position==1){
        insertAtHead(head,d);
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
    //done for updating tail
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }

    //creation of new node to insert 
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}

void deleteNode(int position,Node* &head){

    //deleting head
    if(position==1){
        Node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

    //deleting non-head
    else{
        Node*curr=head;
        Node*prev=NULL;
        
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
int getLength(Node* &head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
void printLinkedList(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

bool isCircular(Node* &head){
    //empty list
    if(head==NULL){
        return false;
    }
    //else
    Node* temp=head->next;
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }

    //i have now a value of temp
    if(temp==head){
        return true;
    }
    return false;
}
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
int main(){
    //created a new node
    Node* node1=new Node(10);
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;


    Node* head=node1;
    // cout<<"Insert at Head:"<<endl;
    // printLinkedList(head);
    // //currently head is node1 i.e. a node with data=10

    // insertAtHead(head,20);
    // printLinkedList(head);
    // //now head will be changed to 20

    // insertAtHead(head,30);
    // printLinkedList(head);
    // //now head will be changed to 30

    // insertAtHead(head,40);
    // printLinkedList(head);
    // //now head will be changed to 40


    cout<<endl<<"Insert at Tail:"<<endl;
    Node* tail=node1;

    printLinkedList(head);
    //currently tail is node1 i.e. a node with data=10


    insertAtTail(tail,20);
    printLinkedList(head);
    //now tail will be changed to 20


    insertAtTail(tail,30);
    printLinkedList(head);
    //now tail will be changed to 30


    insertAtTail(tail,40);
    printLinkedList(head);
    //now tail will be changed to 40  


    //Insertino at 4th position
    cout<<endl<<"Insert 50 at 4th position: "<<endl;
    insertAtPosition(tail,head,4,50);
    printLinkedList(head);

   
    // deleteNode(2,head);
    // printLinkedList(head);

    cout<<isCircular(head);//output=0 i.e. not circular
    
    // cout<<endl<<"Head: "<<head->data<<endl;  
    // cout<<"Tail: "<<tail->data<<endl;
    

    return 0;

}