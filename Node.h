//
// Created by marwane on 15/03/24.
//

#ifndef TREESCPP_NODE_H
#define TREESCPP_NODE_H
#include <iostream>

using namespace std;

template <typename T>
class Node {

    private:
        T data;
        Node* left;
        Node* right;

    public:
        explicit Node() = default;
        explicit Node(T d) : data(d), left(nullptr), right(nullptr) { };

        void sayHello();
        void setData(T t);
        T getData() const;

        void setLeft(Node<T>* node);
        Node<T>* getLeft() const;

        Node<T>* getRight() const;
        void setRight(Node<T>* node);

};


template <typename T>
void Node<T>::sayHello() {
    cout << "Hello" << endl;
}

template<typename T>
void Node<T>::setData(T t) {
    Node::data = t;
}

template<typename T>
T Node<T>::getData() const {
    return this->data;
}

template<typename T>
void Node<T>::setLeft(Node<T> *node) {
    this->left = node;
}

template<typename T>
Node<T>* Node<T>::getLeft() const {
    return this->left;
}

template<typename T>
void Node<T>::setRight(Node<T> *node) {
    this->right = node;
}

template<typename T>
Node<T>* Node<T>::getRight() const {
    return this->right;
}



#endif //TREESCPP_NODE_H
