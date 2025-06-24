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

void print(Node* head) {
  Node* temp = head;
  while(temp != NULL) {
    cout << temp -> data << "->";
    temp = temp-> next;
  }
  cout<<"NULL" << endl;
}

int main() {
  Node* head = NULL;
  Node* tail = NULL;
  head = insertAtHead(10, head, tail);
  print(head);
  head  = insertAtHead(20,head,tail);
  print(head);
  head = insertAtHead(30,head,tail);
  print(head);
  return 0;
}