#include <iostream>
using namespace std;

class Queue{
  private:
    int *arr;
    int n;
    int front;
    int rear;
  public:
    Queue(int size) { 
      arr = new int[size];
      n = size;
      front = -1;
      rear = -1;
    }
    void push(int val) {
      if(rear == n-1) {
        cout << "Overflow" << endl;
      }
      else if(front==-1 && rear == -1) {
        rear++;
        front++;
        arr[rear]= val;
      }
      else {
        rear++;
        arr[rear] = val;
      }
    }
    void pop() {
      if(front==-1 && rear==-1) {
        cout << "Underflow" << endl;
      }
      else if(front == rear) {
        arr[rear] = -1;
        front = -1;
        rear = -1;
      }
      else {
        arr[front] = -1;
        front++;
      }
    }
    int getFront() {
      if(front == -1) {
        cout << "Queue is empty" ;
      }
      else {
        return arr[front];
      }
    }
    int getRear() {
      if(rear==-1 || front==-1){
        cout<<"queue is empty";
      }
      else{
        return arr[rear];
      }
    }
    int getSize() {
      if(front == -1 && rear == -1) {
        return 0;
      }
      else{
        return rear-front+1;
      }
    }
    bool isEmpty() {
      if(front==-1 && rear == -1) {
        return true;
      }
      else{
        return false;
      }
    }
};

int main() {
  Queue q(5);
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  cout << q.getSize() << endl;
  q.push(50);
  cout << q.getFront() << endl;
  q.push(100);
  cout<< q.getRear() << endl;
  cout << q.isEmpty() << endl;
  q.pop();
  cout << q.getSize() << endl;
  q.pop();
  q.pop();
  q.pop();
  q.pop();
  cout << q.getSize() << endl;
  q.pop();
  return 0;
}