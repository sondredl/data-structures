//
// Hashmap.hpp

#pragma once
#include "Node.hpp"

/////////////////// Class Hashmap //////////////////

template <typename T>
class Hashmap{
	int size;
	vector<vector<Node<T>*> > table;
	int hash(int key);
public:

Hashmap(int s);
	~Hashmap();
	void put(int key, T element);
	T find(int key);
	void print_table();
};
/////////////////// Constructors ///////////////////////

template <typename T>
inline Hashmap<T>::Hashmap(int s) : size(s){
//	log(__func__, __FILE__);
	for (int i = 0; i < size; i++) {
		table.push_back(vector<Node<T>*>());
	}
}

template <typename T>
inline Hashmap<T>::~Hashmap() {
	for(int i = 0; i < size; i++){
		for(int j = 0; j < table[i].size(); j++){
			delete table[i][j];
		}
		table[i].clear(); //clear -> all elements are removed or destroyed
	}
}

/////////////////// Member Functions //////////////////////

template <typename T>
inline int Hashmap<T>::hash(int key){
	return key % size;
}

template <typename T>
inline void Hashmap<T>::put(int key, T element){
	int index = hash(key);
	Node<T>* newNode = new Node<T> (key, element);
	table[index].push_back(newNode);

	//	table[hash(key)].push_back(new Node<T> (key, element)); //annen måte
}

template <typename T>
inline T Hashmap<T>::find(int key){
	int index = hash(key);
	for (int i = 0; i < table[index].size(); i++){
		if(table[index][i]->get_key() == key){
			return table[index][i]-> get_element();
		}
	}
	runtime_error("error: no such key in map\n");
}

template <typename T>
inline void Hashmap<T>::print_table(){
	for(int i = 0; i< size; i++){
		cout << " [" << i << "] ";
		for (int j = 0; j < table[i].size(); j++){
			cout << *(table[i][j]) << " "; // må overlaste << 
		}
		cout << endl;
	}
}
