//
// main.cpp

#include "Graph.hpp"

void make_graph();
//void add_edges();
void print_all();

////////////////////////////////

int main(){
	ofstream logfil;
	logfil.open("log.txt", ofstream::trunc);
	logfil.close();

	make_graph();

//	add_edges();
	
	Graph graph;
	graph.add_edge('A', 'B', 6);
	graph.add_edge('B', 'C', 7);
	graph.add_edge('A', 'C', 8);
//	print_all();
}

void make_graph(){
	Graph node;
	node.add_node('A');
	node.add_node('B');
	node.add_node('C');
	node.add_edge('A', 'B', 6);
	node.add_edge('B', 'C', 7);
	node.add_edge('A', 'C', 8);
//	node.print_nodes();
	node.print_edges();
}
/*
void add_edges(){
	Graph graph;
	graph.add_edge('A', 'B', 6);
	graph.add_edge('B', 'C', 7);
	graph.add_edge('A', 'C', 8);
	graph.print_edges();

}
*/
//void print_all(){}
