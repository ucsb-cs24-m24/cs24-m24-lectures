#include "BST.h"
#include <iostream>

using namespace std;

int main() {
    BST bst;
    bst.create_small_bst();
    cout << boolalpha;
    cout << bst.insert(88) << endl;
    // bst.prtInOrder();

    cout << bst.getPredecessor(8) << endl;
    cout << bst.getPredecessor(25) << endl;
    cout << bst.getPredecessor(7) << endl;

    // valgrind --leak-check=full ./main
    bst.clear();
    return 0;
}