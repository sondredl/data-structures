//
//  main.cpp
//  Search_tree
//
//  Created by Sondre Lindkjølen on 02/03/2020.
//  Copyright © 2020 Sondre Lindkjølen. All rights reserved.
//


#include "binary_tree.hpp"

//void log(Node<T>* n);

//int operator << (ostream& os, Node& O){	return O	return O.}
	

int main()
{
	ofstream logfil;
	logfil.open("logfil.txt", ofstream::trunc);
	logfil.close();

	srand(time(NULL));
	int n = 20;
	Bin_tree<int>* tree = new Bin_tree<int>;
	for(int i = 0; i < n; i++){
		int random = rand() % 10;
		tree -> insert(random);
	}

	std::cout << endl << "preorder:\t";
	tree -> print_preorder();
	std::cout << endl << "inorder:\t";
	tree -> print_inorder();
	std::cout << endl << "postorder:\t";
	tree -> print_postorder();
	std::cout << "\n\n";
//	log(tree);
}

/*
void log(Node<T>* n){
	static int counter = 1;
	logfil.open("logfil.txt", ofstream::app);
	logfil << counter << "\t" << n.get_left() << endl;
	counter++; 
}
*/
