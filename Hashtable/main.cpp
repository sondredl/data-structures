//
// main.cpp

#include "Hashmap.hpp"
//#include "Log.hpp"
/////////////////// Hashkey Main ////////////////////

int main(){
/*
	ofstream log;
	log.open("log.txt", ofstream::trunc);
	log.close();
*/


	Hashmap<string>* my_map = new Hashmap<string>(10);
	my_map -> put(34, "Ole");
	my_map -> put(54, "kari");
	my_map -> put(17, "tog");
	my_map -> print_table();
//	cout << my_map -> find(74);
}
