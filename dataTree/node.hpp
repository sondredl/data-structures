//
//  Node.hpp
//  Search_tree
//
//  Created by Sondre Lindkjølen on 02/03/2020.
//  Copyright © 2020 Sondre Lindkjølen. All rights reserved.
//

#pragma once
#include <iostream>
#include <fstream>
#include <thread>
#include <string>
#include <fstream>

using namespace std;

template <typename T>

class Node{
    T value;
    Node<T>* left;
    Node<T>* right;
public:
    Node(T val);
    Node<T>* get_left();
    Node<T>* get_right();
    void set_left(Node<T>* n);
    void set_right(Node<T>* n);
    T get_val();
};

template <typename T>
inline Node<T>::Node(T val):
    value(val), left(nullptr), right(nullptr) {}

template <typename T>
inline Node<T>* Node<T>::get_left(){
    return left;
}

template <typename T>
inline Node<T>* Node<T>::get_right(){
    return right;
}

template <typename T>
inline void Node<T>::set_left(Node<T>* n){
        left = n;
}

template <typename T>
inline void Node<T>::set_right(Node<T>* n){
        right = n;
}

template <typename T>
inline T Node<T>::get_val(){
    return value;
}

template <typename T>
ostream& operator << (ostream& os, Node<T>& O);
