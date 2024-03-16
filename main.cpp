#include <iostream>
#include "Node.h"
#include "Tree.h"

int main() {
    Node<int> root{5};
    Node<int> node1{4};
    Node<int> node2{3};
    Node<int> node3{2};
    Node<int> node4{1};
    Node<int> node6{7};
    Node<int> node5{8};

    Tree<int> tree{&root};

    tree.insert(&node1);
    tree.insert(&node2);
    tree.insert(&node3);


    cout << tree.find(82) << endl;

    return 0;
}