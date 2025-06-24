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

Node* insertAtHead(int value, Node* &head, Node* &tail) {
  if(head == NULL && tail == NULL ) {
    Node* newNode = new Node(value);
    head = newNode;
    tail = newNode;
  }
  else {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
  }
  return head;
}

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

int getLength(Node* head) {
  int len = 0;
  Node* temp = head;
  while(temp != NULL) {
    temp = temp->next;
    len++;
  }
  return len;
}

void insertAtPosition(int position,int value, Node* &head, Node* &tail ){
  int length = getLength(head);
  if(position == 1) {
    head = insertAtHead(value, head, tail);
  }
  else if(position == length + 1) {
    insertAtTail(value, head, tail);
  }
  else {
    Node* temp = head;
    for(int i=0; i<position-2; i++) {
      temp = temp -> next;
    }
    Node* newNode = new Node(value);
    newNode->next = temp->next;
    temp->next = newNode;
  }
}

int searchLL(int target, Node* head) {
  Node* temp = head;
  int position=1;
  while(temp != NULL) {
    if(temp ->data == target) {
      return position;
    }
    temp = temp->next;
    position++;
  }
  return false;
}

int main() {
  Node* head = NULL;
  Node* tail = NULL;
  insertAtTail(101,head,tail);
  print(head);
  insertAtTail(102,head,tail);
  print(head);
  insertAtTail(103,head,tail);
  print(head);
  insertAtPosition(1, 42, head, tail);
  print(head);
  insertAtPosition(5,57,head,tail);
  print(head);
  insertAtPosition(3,420,head,tail);
  print(head);
  cout<<"element is at "<<searchLL(57,head)<<" position";
  return 0;
}