#include <iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
  Node (int value) : data(value), next(nullptr){}
};

void removeDuplicates(Node* head)
{
  if(!head)
    return;

  Node *current = head;

  while(current->next){
    if(current->data != current->next->data)
    {
      current = current->next;
    }
    else
    {
      Node* nextTonext = current->next->next;
      Node* ToDelete = current->next;
      delete ToDelete;
      current->next = nextTonext;
    }
  }

  while(head)
    {
      cout<<head->data<<" ";
      head = head->next;
    }
}

int main() {

  Node* head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(2);
  head->next->next->next = new Node(2);
  head->next->next->next->next = new Node(4);
  head->next->next->next->next->next = new Node(4);
  head->next->next->next->next->next->next = new Node(4);

  removeDuplicates(head);
  return 0;
}
