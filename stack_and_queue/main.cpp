//
//  main.cpp
//  Stack_and_que
//
//  Created by Sondre Lindkjølen on 17/02/2020.
//  Copyright © 2020 Sondre Lindkjølen. All rights reserved.
//


#include "Queue.hpp"
#include "Stack.hpp"


int main(){
//    node();
	Queue Q;
	for(int i = 0; i < 10; i++){
		myQ.enqueue(i);
	}
	while( !myQ.isempty()){
		cout << myQ.dequeue() << " ";
	}
	cout << endl;
	stack myS;
	for(int i = 0; i < 10; i++){
		myS.push(i);
	}
	while( !myS.is_empty()){
		cout << myS.pop() << " ";
	}
	array_list();
}

void node(){
    cout << "NODE : \n";
    Queue myQ;
    cout << "queue: \t";
    for(int i = 0; i < 10; i++){
        myQ.enqueue(i);
    }
    while(!myQ.is_empty()) {
        cout << myQ.deQueue() << " ";
    }
    cout << endl;
    Stack myS;
    cout << "Stack: \t";
    for(int i = 0; i < 10; i++){
        myS.push(i);
    }
    while(!myS.is_empty()){
        cout << myS.pop() << " ";
    }
    if(myS.is_empty()) cout << "\nnode stack is empty \n";
    if(myQ.is_empty()) cout << "node queue is empty \n";
}

void array_list(){
    cout << "\n\n\n ArrayList :\n";
    Queue myQ;
    cout << "queue: \t";
    for(int i = 0; i < 10; i++){
        myQ.enqueue(i);
    }
    while(!myQ.is_empty()) {
        cout << myQ.deQueue() << " ";
    }
    cout << endl;
    Stack myS;
    cout << "Stack: \t";
    for(int i = 0; i < 10; i++){
        myS.push(i);
    }
    while(!myS.is_empty()){
        cout << myS.pop() << " ";
    }
    if(myS.is_empty()) cout << "array stack is empty \n";
    if(myQ.is_empty()) cout << "array queue is empty \n";
}
