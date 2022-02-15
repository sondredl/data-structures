//
// Node.hpp

#pragma once

#include <iostream>
#include <string>
#include <vector>
using namespace std;

//#include "std_lib_facilities.h"
//#include "Log.hpp"

////////////////////// Class Node //////////

template <typename T>
class Node{
	int key;
	T element;
public:
	Node(int k, T e);
	int get_key();
	T get_element();
};

///////////////// Constructor ////////////////////////

template <typename T>
inline Node<T>::Node(int k, T e) : key(k), element(e) {}

///////////////// Member Functions /////////////////

template <typename T>
int Node<T>::get_key(){
	return key;
}

template <typename T>
inline T Node<T>::get_element(){
	return element;
}

template <typename T>
ostream& operator << (ostream& ost, Node<T>& n){
	return ost << "(" << n.get_key() << ", " << n.get_element() << ")";
}
