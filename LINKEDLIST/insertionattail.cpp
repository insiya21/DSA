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

Node* insertAtTail(int value, Node* &head, Node* &tail) {
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
  insertAtTail(101,head,tail);
  print(head);
  //101 -> NULL
  insertAtTail(102,head,tail);
  print(head);
  //101->102->NULL
  insertAtTail(103,head,tail);
  print(head);
  //101->102->103->NULL
  return 0;
}