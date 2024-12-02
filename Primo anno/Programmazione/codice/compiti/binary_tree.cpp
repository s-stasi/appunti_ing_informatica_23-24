#include <iostream>

using namespace std;

void printLeafs(Node* node);

struct Node {
  int data;
  Node *left, *right;
};

int main(int argc, const char **argv)
{
  Node* tree;

  printLeafs(tree);
  
  return 0;
}

Node* newNode (int data) {
  Node* temp = new Node;
  temp->data = data;
  temp->left = nullptr;
  temp->right = nullptr;
  return temp;
}

void printLeafs(Node* node) {
  if(node == nullptr) return;

  if(node->left == nullptr && node->right == nullptr) {
    cout << "Found leaf with value " << node->data << endl;
    return;
  }

  if(node->left != nullptr) printLeafs(node->left);
  if(node->right != nullptr) printLeafs(node->right);

  return;
}
