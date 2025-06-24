#include <iostream>
using namespace std;

class Node{
  public:
    int data;
    Node* next;
    //constructor
    Node(int value) {
      this->data = value;
      this->next = NULL;
    }
};

void insertAtTail(int value, Node* &head, Node* &tail) {
  if(head == NULL && tail == NULL) {
    Node* newNode = new Node(value);
    head = newNode;
    tail = newNode;
  }
  else {
    Node* newNode = new Node(value);
    tail->next  = newNode;
    tail = newNode;
  }
}

void print(Node* head) {
  Node* temp = head;
  while(temp != NULL) {
    cout << temp -> data << "->";
    temp = temp-> next;
  }
  cout<<"NULL" << endl;
}

void deleteNodeFromLL(int position, Node* &head, Node* &tail) {
  if(head == NULL && tail == NULL) {
    cout << "No node to delete" << endl;
    return;
  }
  if(head == tail) {
    Node* temp = head;
    head = NULL;
    tail = NULL;
    delete temp;
  }
  else {
    if(position == 1) {
      Node* temp = head;
      head = temp->next;
      temp->next = NULL;
      delete temp;
    }
    else {
      Node* prev = head;
      for(int i=0; i<position-2; i++) {
        prev = prev -> next;
      }
      Node* curr = prev ->next;
      Node* forward = curr ->next;
      prev->next = forward;
      curr->next = NULL;
      delete curr;
    }
  }
}

int main() {
  Node* head = NULL;
  Node* tail = NULL;
  insertAtTail(101,head,tail);
  insertAtTail(102,head,tail);
  insertAtTail(103,head,tail);
  insertAtTail(104,head,tail);
  print(head);
  deleteNodeFromLL(1,head,tail);
  print(head);
  deleteNodeFromLL(2,head,tail);
  print(head);
  deleteNodeFromLL(2,head,tail);
  print(head);
  return 0;
}