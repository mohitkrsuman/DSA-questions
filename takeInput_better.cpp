#include<iostream>
using namespace std; 

class Node{
  public:
    int data;
    Node *next;

    Node(int data){
       this->data = data;
       next = NULL;
    }
};

Node* takeInput_better(){
   int data;
   cin>>data;

   Node *head = NULL;
   Node *tail = NULL;

   while(data != -1){
      Node *newNode = new Node(data);
      if(head == NULL){
         head = newNode;
         tail = newNode;
      }else{
         tail -> next = newNode;
         tail = tail->next;
      }
      cin>>data;
   }
   return head;
}

void print(Node *head){
   Node *temp = head;

   while(temp != head){
      cout<<temp->data<<endl;
      temp = temp->next;
   }
}

int main(){
   Node *head = takeInput_better(); 
   print(head);

   return 0;
}