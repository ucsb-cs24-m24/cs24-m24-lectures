#include "BST.h"
using namespace std;

// BST() { root = nullptr; }
// bool find(int value) const;
// int sum() const;
// void prtInOrder() const;
// int getHeight() const;
// bool insert(int value);
// void clear();
// bool erase(int value);

bool BST::find(int value) const
{
    return find(value, root);
}

bool BST::find(int value, Node *n) const
{
    if (n == nullptr)
        return false;

    if (value == n->data)
        return true;

    return find(value, n->left) || find(value, n->right);
}

int BST::sum() const
{
    return sum(root);
}

int BST::sum(Node *n) const
{

    if (!n)
        return 0;

    return n->data + sum(n->left) + sum(n->right);
}

void BST::prtInOrder() const
{
    prtInOrder(root);
}

void BST::prtInOrder(Node *n) const
{
    if (!n)
        return;

    prtInOrder(n->left);
    cout << n->data << endl;
    prtInOrder(n->right);
}

int BST::getHeight() const
{
    return getHeight(root);
}

int BST::getHeight(Node *n) const
{
    if (!n)
        return -1;

    return max(getHeight(n->left), getHeight(n->right)) + 1;
}

bool BST::insert(int value)
{
    return insert(value, root);
}

bool BST::insert(int value, Node *n)
{
    if (value < n->data && !n->left)
    {
        n->left = new Node(value);
        n->left->parent = n;
        return true;
    }
    else if (value > n->data && !n->right)
    {
        n->right = new Node(value);
        n->right->parent = n;
        return true;
    }
    else
    {
        if (value < n->data)
            return insert(value, n->left);

        else if (value > n->data)
            return insert(value, n->right);

        else
            return false;
    }
}

void BST::clear()
{
    clear(root);
}

void BST::clear(Node *n)
{
    if (!n)
        return;

    clear(n->left);
    clear(n->right);
    delete n;
}

int BST::getPredecessor(int value) const
{
    // Node *n = getNode(value, root);

    // if (!n)
    //     return 0;
    
    // if(n->left)
    //     return n->left->data;

    
    
    // while(n->parent)
    // {
    //     n = n->parent;

    //     if(n)
    //     cout << n->data << endl;
    // }
    // if(!n->parent)
    //     return 0;

    // return n->data;

}

BST::Node *BST::getNode(int value, Node *n) const
{
    if (!n)
        return nullptr;

    if (value < n->data)
        return getNode(value, n->left);
    else if (value > n->data)
        return getNode(value, n->right);
    else
        return n;
}

int BST::getSuccessor(int value) const
{


    
}

// bool BST::erase(int value)
// {
// }

void BST::create_small_bst()
{
    root = new Node(50);
    root->right = new Node(100);
    root->left = new Node(20);
    root->left->left = new Node(7);
    root->left->right = new Node(25);
    root->left->left->right = new Node(8);
    return;
}