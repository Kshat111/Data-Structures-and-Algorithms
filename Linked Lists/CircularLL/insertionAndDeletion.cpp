#include<iostream>
#include<map>
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
            next=NULL;
        }
        cout<<"Memory freed for data: "<<value<<endl;
    }
};
void insertNode(Node* &tail,int element,int d){
    //empty list
    if(tail==NULL){
        Node* newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    //assuming the element is present in the list
    else{
        Node* curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        Node *temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}
void deleteNode(Node* &tail,int value){
    //empty list
    if(tail==NULL){
        cout<<"List is empty, nothing to delete"<<endl;
        return;
    }
    //non-empty
    else{
        Node* prev=tail;
        Node* curr=prev->next;
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;

        //single node LL
        if(curr==prev){
            tail=NULL;
        }
        //more than one node LL
        else if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}
void print(Node* &tail){
    Node *temp=tail;
    //empty list
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    while(tail!=temp);
    cout<<endl;
}
bool isCircular(Node* &head){
    //empty list
    if(head==NULL){
        return true;
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
int main(){
    Node*tail=NULL;
    insertNode(tail,5,1);
    print(tail);
    insertNode(tail,1,6);
    print(tail);
    insertNode(tail,6,4);
    print(tail);
    insertNode(tail,4,10);
    print(tail);
    insertNode(tail,6,12);
    print(tail);

    deleteNode(tail,1);
    print(tail);
    return 0;
}