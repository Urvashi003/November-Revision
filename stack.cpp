#include<bits/stdc++.h>
using namespace std;

// class Stack{
//    public:
//    int *arr;
//    int size;
//    int top;

//    Stack(int size){
//     this->size=size;
//     top=-1;
//     arr= new int[size];
//    }

//    void push(int ele){
//     if(size-top>1){
//         top++;
//         arr[top]=ele;
//     }else{
//         cout<<"overflow"<<endl;
//     }
//    }

//    void pop(){
//     if(top>=0){
//         top--;
//     }else{
//         cout<<"underflow"<<endl;
//     }
//    }

//    int peek(){
//     if(top>=0){
//         return arr[top];
//     }else{
//         cout<<"stack is empty"<<endl;
//         return -1;
//     }
//    }

//    bool isEmpty(){
//     if(top==-1){
//         return true;
//     }
//     else{
//         return false;
//     }
//    }
// };

// int main(){
//   Stack st(8);
// //   st.push(9);
// //   st.push(8);
// //   cout<<st.top()<<endl;
// //   cout<<st.size()<<endl;
// //   cout<<(st.empty())<<endl;


// }

// class Node{
//     public:
//     int data;
//     Node* next;
// };

// class Stack{
//     public:
//     Node* top;
//     Stack(){  //no size declare as dynamic hai
//         top=NULL;
//     }

//     void push(int x){
//         Node* newNode= new Node();
//         newNode->data=x;
//         newNode->next=top;
//         top=newNode;
//     }

//     void pop(){
//         if(top==NULL){
//             cout<<"empty"<<endl;
//             return;
//         }
//         Node* temp= top;
//         top=top->next;
//         delete temp;
//     }
//     void display(){
//         if(top==NULL){
//             cout<<"empty"<<endl;
//             return;
//         }
//         Node* temp= top;
//         while(temp){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }
// };

// int main(){
//     Stack s;
//     s.push(9);
//     s.push(8);
//     s.display();
// }

// class TwoStack{
//     public:
//    int* arr;
//    int top1;
//    int top2;
//    int size;

//    TwoStack(int s){
//     this->size=s;
//     top1= -1;
//     top2=s;
//     arr= new int[s];
//    }

//    void push1(int num){
//     if(top2-top1>1){
//         top1++;
//         arr[top1]=num;
//     }
//    }
//    void push2(int num){
//     if(top2-top1>1){
//         top2--;
//         arr[top2]=num;
//     }
//    }

//    int pop1(){
//     if(top1>=0){
//         int ans= arr[top1];
//         top1--;
//         return ans;
//     }else{
//         return -1;
//     }
//    }

//    int pop2(){
//     if(top2<size){
//         int ans= arr[top2];
//         top2++;
//         return ans;
//     }else{
//         return -1;
//     }
//    }
// };

//REVERSE
int main(){
    string str= "College";
    stack<char>s;
    for(int i=0;i<str.size();i++){
       char ch= str[i];
       s.push(ch);

    }
    string ans=" ";
    while(!s.empty()){
       char ch= s.top();
       ans.push_back(ch);
       s.pop();
    }
    cout<<ans<<endl;
    return 0;
}