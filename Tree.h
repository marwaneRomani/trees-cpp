//
// Created by marwane on 15/03/24.
//

#ifndef TREESCPP_TREE_H
#define TREESCPP_TREE_H

#include "Node.h"

template <typename T>
class Tree {
    private:
        Node<T>* root;

    public:
        explicit Tree() = default;
        explicit Tree(Node<T>* r) : root(r) {};

        void insert(Node<T>* node);
        bool find(T type) const;

        void printTree() const;

    //private functions
    private:
        void print(Node<T>* r) const;

};

template<typename T>
void Tree<T>::insert(Node<T>* node) {
    if (root == nullptr) {
        root = node;
        return;
    }

    bool inserted = false;
    Node<T> *currentNode = root;

    while (!inserted) {
        if (node->getData() < currentNode->getData()) {
            if (currentNode->getLeft() == nullptr) {
                currentNode->setLeft(node);
                inserted = true;
            } else
                currentNode = currentNode->getLeft();

        } else {
                if (currentNode->getRight() == nullptr) {
                    currentNode->setRight(node);
                    inserted = true;
                } else
                    currentNode = currentNode->getRight();

        }
    }
}

template<typename T>
void Tree<T>::printTree() const {
    print(root);
}

template<typename T>
void Tree<T>::print(Node<T> *r) const {
    if (r == nullptr)
        return;

    cout << r->getData() << endl;

    print(r->getLeft());
    print(r->getRight());

}

template<typename T>
bool Tree<T>::find(T type) const {
    if (root == nullptr)
        return false;

    Node<T>* currentNode = root;

    while(true) {
        if (currentNode->getData() == type)
            return true;

        if (currentNode->getData() < type) {
            if (currentNode->getRight() == nullptr)
                return false;
            else
                currentNode = currentNode->getRight();
        } else {
            if (currentNode->getLeft() == nullptr)
                return false;
            else
                currentNode = currentNode->getLeft();
        }
    }
}


#endif //TREESCPP_TREE_H
