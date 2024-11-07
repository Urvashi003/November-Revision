#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data= val;
        next=NULL;
    }

};

Node* insertInEmpty(Node* head, int data){
    if(head != NULL) return head;
    Node* newNode= new Node(data);
    newNode->next= newNode;
    head=newNode;
    return head;
    
}

Node* insertAtBeg(Node* head, int data){
    Node* newNode= new Node(data);
    
    
    newNode->next= head;
    head->next= newNode;
    return head;

}

void printList(Node* head){
   if (head == nullptr) return;

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main(){
    Node* first= new Node(1);
    Node* sec= new Node(2);
    Node* last= new Node(3);
    first->next= sec;
    sec->next= last;
    last->next= first;
    insertAtBeg(first,9);
    printList(first);
}