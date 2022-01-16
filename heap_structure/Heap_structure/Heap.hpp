//
// Heap.hpp

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;

//////////////////// class Heap //////////////////// 

class Heap{
	int* table;
	int capacity;
	int size;

	void fix_heap_down();
	void fix_heap_up();
	int get_parent_index(int child_index);
	int get_left_child_index(int parent_index);
	int get_right_child_index(int parent_index);
	bool has_parent(int index);
	bool has_left_child(int index);
	bool has_right_child(int index);
	void swap(int index1, int index2);

public:
	Heap(int c);

	int min();
	int remove_min();
	void insert(int value);
	void print();
};
