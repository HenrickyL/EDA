#include "Tree.h"
#include <string>



void Tree::createTree(char* serial, Node* node){
    //caso base:
    if(serial[0] == '\0'){
        return;
    }
    //recursion:
    else{
        if(serial[0] != '#' || serial[0] !=' '){
            std::string s = "";
            int n = 0;
            for(int i=0; serial[i] || serial[i] != ' ' || serial[i] != '#'; i++){
                s += serial[i];
                n++;
            }
            int key = std::stoi(s);
            Node* newNode = new Node(key);
            createTree(serial+n, newNode);
        }
    }
}

Tree::Tree(std::string serial){
    Node* node = _root;
    char* s = new char[serial.length()];
    for(int i = 0; serial[i]; i++){
        s[i] = serial[i];
        std::cout << s[i];
    }
    std::cout << std::endl;
    createTree(s,_root);
}