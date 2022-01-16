//
// main.cpp

#include "Heap.hpp"

int main(){
	srand(time(NULL));
	cout << endl;
	Heap my_heap(10);
	for (int i = 0; i < 10; i++){
		int n = rand() % 100;
		my_heap.insert(n);
		cout << "After iserting " << n << " the heap looks like this: ";
		my_heap.print();
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		cout << "Remove_min returns " << my_heap.remove_min();
		cout << "and the heap looks like this: ";
		my_heap.print();
	}
	cout << endl;
}
