#ifndef TREE_H
#define TREE_H

#include <iostream>
#include "Node.h"

class Tree{
private:
    Node* _root;
    void createTree(char* serial, Node* node);
public:
    Tree(std::string serial);
    Tree(int value, Node& left, Node& right);
};

#endif