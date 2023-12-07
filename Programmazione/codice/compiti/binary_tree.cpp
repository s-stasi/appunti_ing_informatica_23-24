#include <iostream>

struct Node {
  int data;
  Node *left, *right;
};

int main(int argc, const char **argv)
{
  
  return 0;
}

Node* newNode (int data) {
  Node* temp = new Node;
  temp->data = data;
  temp->left = nullptr;
  temp->right = nullptr;
  return temp;
}
