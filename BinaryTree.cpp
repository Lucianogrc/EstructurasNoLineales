#include "BinaryTree.h"
#include <iostream>

using namespace std;

Node::Node(int value) {
    data = value;
    left = nullptr;
    right = nullptr;
}

Node* BinaryTree::insert(Node *node, int value) {
    if(node == nullptr) {
        return new Node(value);
    }

    if(value < node -> data) {
        node -> left = insert(node -> left, value);
    }
    else {
        node -> right = insert(node -> right, value);
    }

    return node;
}