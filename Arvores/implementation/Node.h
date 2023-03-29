#ifndef NODE_H
#define NODE_H

struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int key, Node* left=nullptr, Node* right=nullptr){
        this->key = key;
        this->left = left;
        this->right = right;
    }
};

#endif