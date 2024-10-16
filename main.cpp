#include <iostream>
#include "BinaryTree.h"
#include "BinaryTree.cpp"

int main()
{
    std::cout << "Hello, World!" << std::endl;


    BinaryTree tree;
    tree.root = tree.insert(tree.root, 50);
    tree.root = tree.insert(tree.root, 30);
    tree.root = tree.insert(tree.root, 70);

    return 0;
}
