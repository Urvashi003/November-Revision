#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
  int data;
  Node* next;
  Node* prev;

  Node(int data){
    this->prev= NULL;
    this->next=NULL;
    this->data= data;
  }
};

void insertAtBeg(Node* &head, int data){
    Node* newNode= new Node(data);
    if(head==NULL){
        head= newNode;
        return;
    }

    newNode->next= head;
    head->prev= newNode;
    head= newNode;
}

void insertAtEnd(Node* &head, int data){
    Node* newNode= new Node(data);
    if(head==NULL){
        head= newNode;
        return;
    }
    Node* temp= head;
    while(temp->next !=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;
}

void insertAtPos(Node* &head, int data, int pos){
    if(pos==1){
        insertAtBeg(head,data);
        return;
    }
    Node* newNode= new Node(data);
    Node* temp= head;

    for(int i=1; temp !=NULL and i<pos-1; i++){
        temp=temp->next;
    }
    newNode->next= temp->next;
    newNode->prev= temp;
    if(temp->next !=NULL){
        temp->next->prev= newNode;
    }
    temp->next= newNode;
}

void deleteAtBeg(Node* &head){
    if(head==NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    Node* temp=head;
    head=head->next;
    if(head!=NULL){
        head->prev=NULL;
    }
    delete temp;

}

void deleteAtEnd(Node* &head){
    if(head==NULL){
        cout<<"the list is already empty"<<endl;
        return;
    }
    Node* temp= head;
    if(temp->next ==NULL){
        head=NULL;
        delete temp;
        return;

    }
    while(temp->next !=NULL){
        temp=temp->next;
    }
    temp->prev->next=NULL;
    delete temp;
}

void deleteAtPos(Node* &head, int pos){
    Node* temp=head;
    for(int i=1; temp !=NULL and i<pos; i++){
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"pos is greater"<<endl;
        return;
    }
    if(temp->next != NULL){
        temp->next->prev= temp->prev;
    }
    if(temp->prev !=NULL){
        temp->prev->next= temp->next;
    }
    delete temp;

}



int main(){
  Node* head= NULL;


 

}
