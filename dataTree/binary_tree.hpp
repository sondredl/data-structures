//
//  BinaryTree.hpp
//  Search_tree
//
//  Created by Sondre Lindkjølen on 02/03/2020.
//  Copyright © 2020 Sondre Lindkjølen. All rights reserved.
//

#pragma once
#include "node.hpp"

template <typename T>
class Bin_tree{
    Node<T>* root;
    Node<T>* insert(T val, Node<T>* current);
    void print_preorder(Node<T>* current);
	void print_inorder(Node<T>* current);
	void print_postorder(Node<T>* current);
	Node<T>* search(Node<T>* current, T val);
	Node<T>* remove(Node<T>* current, T val);
	T find_min(Node<T>* current);
public:
    Bin_tree();
    ~Bin_tree();
    void insert(T val);
	void print_preorder();
	void print_inorder();
	void print_postorder();
	Node<T>* search(T val);
	void remove(T val);
	Node<T>* depth();
};

template<typename T>
inline Node<T>* Bin_tree<T>::depth(){
	
}

template<typename T>
inline Node<T>* Bin_tree<T>::insert(T val, Node<T>* current){
    if(current == nullptr)
        return new Node<T>(val);
    if(val < current->get_val())
        current -> set_left(insert(val, current-> get_left()));
    else
        current -> set_right(insert(val, current -> get_right()));
    
    return current;
}

template<typename T>
inline void Bin_tree<T>::print_preorder(Node<T>* current){
    if(current == nullptr) return;
    cout << current -> get_val() << " ";
    print_preorder(current -> get_left());
    print_preorder(current -> get_right());    
}

template <typename T>
inline void Bin_tree<T>::print_inorder(Node<T>* current){
	if( current == nullptr) return;
	print_inorder (current -> get_left());
	cout << current -> get_val() << " ";
	print_inorder( current -> get_right());
}

template<typename T>
inline void Bin_tree<T>::print_postorder(Node<T>* current){
	if(current == nullptr) return;
	print_postorder(current -> get_left());
	print_postorder(current -> get_right());
	cout << current -> get_val() << " ";
}

template <typename T>
inline Node<T>* Bin_tree<T>::search(Node<T>* current, T val){
	if(current == nullptr) return nullptr;
	if(current -> get_val() == val) return current;
	if(val < current -> getval())
		return search(current -> get_left(), val);
	return search(current -> get_right(), val);
}


template <typename T>
inline Node<T>* Bin_tree<T>::remove(Node<T>* current, T val){
	if (current == nullptr) return nullptr;
	if (current -> get_val() == val) {
		Node<T>* rem = current;
		if (rem -> get_right() == nullptr)
			current = rem -> get_left();
		else{
			current = new Node<T>(find_min(rem -> get_right()));
			current -> set_left(rem -> get_left());
			current -> set_right(remove(rem -> get_right(), current -> get_val()));
		}
		delete rem;
	}
	if (val < current -> get_val())
		current -> set_val( remove(current -> get_left(), val()));
	if (val >= current -> get_val())
		current -> set_right(remove(current -> get_right(), val()));
}

template <typename T>
inline T Bin_tree<T>::find_min(Node<T>* current){
	if (current == nullptr) runtime_error("find_min in emptry tree");
	while (current -> get_left() != nullptr)
		current = current -> get_left();
	return current -> get_val();
}

template<typename T>
inline Bin_tree<T>::Bin_tree(){
	root = nullptr;
}

template <typename T>
inline Bin_tree<T>::~Bin_tree(){
	while (root != nullptr){
		root = remove(root, root -> get_val());
	}
}

template <typename T>
inline void Bin_tree<T>::insert(T val){
	root = insert(val, root);
}

template <typename T>
inline void Bin_tree<T>::print_preorder(){
	print_preorder(root);
}

template <typename T>
inline void Bin_tree<T>::print_inorder(){
	print_inorder(root);
}

template <typename T>
inline void Bin_tree<T>::print_postorder(){
	print_postorder(root);
}

template <typename T>
inline Node<T>* Bin_tree<T>::search(T val){
	return search(root, val);
}

template <typename T>
inline void Bin_tree<T>::remove(T val){
	root = remove(root, val);
}

