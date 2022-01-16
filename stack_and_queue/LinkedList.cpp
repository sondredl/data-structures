//
//  LinkedList.cpp
//  Stack_and_que
//
//  Created by Sondre Lindkjølen on 17/02/2020.
//  Copyright © 2020 Sondre Lindkjølen. All rights reserved.
//

#include "LinkedList.hpp"

LinkedList::LinkedList()
	:no_of_elements(0), head(nullptr), tail(nullptr) {}

LinkedList::~LinkedList() {
    while(!is_empty()) remove_front();
}

void LinkedList::insert_front(int n){
    Node* new_node = new Node(n, head, nullptr);
    if(head != nullptr) head -> setPrevious(new_node);
    if(tail == nullptr) tail = new_node;
    head = new_node;
    no_of_elements++;
}

void LinkedList::insert_back(int n) {
    Node* new_node = new Node(n, nullptr, tail);
    if(tail != nullptr) tail -> setNext(new_node);
    if(head == nullptr) head = new_node;
    tail = new_node;
    no_of_elements++;
}

int LinkedList::remove_front(){
    if(is_empty()) error("remove front from empty list");
    Node* rem = head;
    int value = rem -> getValue();
    head = head -> getNext();
    if(head != nullptr) head -> setPrevious(nullptr);
    if(tail == rem) tail = nullptr;
    no_of_elements--;
    delete rem;
    return value;
}

int LinkedList::remove_back(){
    if(is_empty()) error(" remove back from empty list");
    Node* rem = tail;
    int value = rem -> getValue();
    tail = tail -> getPrevious();
    if(tail != nullptr) tail -> setNext(nullptr);
    if(head == rem) head = nullptr;
    no_of_elements--;
    delete rem;
    return value;
}

int LinkedList::get_front() const{
    if(is_empty()) error("get front from empty list");
    return head -> getValue();
}

int LinkedList::get_back() const{
    if(is_empty()) error("Get back from empty list");
    return tail -> getValue();
}

int LinkedList::size() const{
    return no_of_elements;
}

bool LinkedList::is_empty() const{
    return no_of_elements == 0;

