#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Insert at end using tail pointer
void insertEnd(Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (tail == NULL) {
        newNode->next = newNode; // point to itself
        tail = newNode;
        return;
    }
    newNode->next = tail->next; // newNode->next = head
    tail->next = newNode;
    tail = newNode;
}

// Display list
void display(Node* tail) {
    if (tail == NULL) return;
    Node* temp = tail->next; // start from head
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != tail->next);
    cout << "(back to head)" << endl;
}

// Length of circular linked list
int length(Node* tail) {
    if (tail == NULL) return 0;
    int count = 1;
    Node* temp = tail->next;
    while (temp != tail) {
        count++;
        temp = temp->next;
    }
    return count;
}

int main() {
    Node* tail = NULL;

    insertEnd(tail, 10);
    insertEnd(tail, 20);
    insertEnd(tail, 30);
    insertEnd(tail, 40);
    display(tail);
    cout << "Length: " << length(tail) << endl;
    return 0;
}