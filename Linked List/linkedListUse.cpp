#include<iostream>
#include"node.h"
using namespace std;

Node<int>* takeInput(){
  int data;
  cin >> data;
  Node<int>* head = NULL;
  Node<int>* tail = NULL;
  while(data != -1){
    Node<int>*newNode = new Node<int>(data);
    if(head == NULL){
      head = newNode;
      tail = newNode;
    }
    else{
      tail->next = newNode;
      tail = newNode;
    }
    cin >> data;
  }
  return head;
}

void insert(Node<int>*head, int i, int data){
  Node<int>* temp = head;
  int count  = 1;
  while(temp!=NULL && count < i){
    temp = temp->next;
    count++;
  }
  if(temp != NULL){
    Node<int>* newNode = new Node<int>(data);
    newNode->next = temp->next;
    temp->next = newNode;
  }
}

void printLL(Node<int>* head){
  Node<int>* temp = head;
  while(temp){
    cout << temp->data << " ";
    temp = temp->next;
  }
}

int main(){
  // Node<int>* head = new Node<int>(25);
  // Node<int>* child1 = new Node<int>(50);
  // Node<int>* child2 = new Node<int>(90);
  // Node<int>* child3 = new Node<int>(100);

  // head->next = child1;
  // child1->next = child2;
  // child2->next = child3;

  Node<int>*head = takeInput();
  insert(head, 4, 99);
  printLL(head);

  return 0;
}