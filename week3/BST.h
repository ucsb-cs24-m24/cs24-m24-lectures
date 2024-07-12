// macro gaurd C++
// https://www.geeksforgeeks.org/include-guards-in-c/
// #pragma once

#ifndef _BST_H_
#define _BST_H_

#include <iostream>
class BST
{
public:
    BST() { root = nullptr; }
    bool find(int value) const;
    int sum() const;
    void prtInOrder() const;
    int getHeight() const;
    bool insert(int value);
    void clear();
    int getPredecessor(int value) const;
    int getSuccessor(int value) const;
    bool erase(int value);

    void create_small_bst();

private:
    struct Node
    {
        int data;
        Node *left;
        Node *right;
        Node *parent;
        Node(int value)
        {
            left = nullptr;
            right = nullptr;
            parent = nullptr;
            data = value;
        }
    };
    Node *root;
    bool find(int value, Node* n) const;
    int sum(Node* n) const;
    void prtInOrder(Node* n) const;
    int getHeight(Node* n) const;
    bool insert(int value, Node* n);
    void clear(Node *n);
    Node* getNode(int value, Node* n) const;
};

#endif