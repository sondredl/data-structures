
//
//  ArrayList.cpp
//  Stack_and_que
//
//  Created by Sondre Lindkjølen on 26/02/2020.
//  Copyright © 2020 Sondre Lindkjølen. All rights reserved.
//


#include "ArrayList.hpp"

ArrayList::ArrayList() :head(nullptr), tail(nullptr) {
    my_array = new int [10];
}

ArrayList::~ArrayList() {
    while(!is_empty()) remove_front();
}

void ArrayList::insert_front(int n){
    
    number_of_elements++;
}

void ArrayList::insert_back(int n) {
    number_of_elements++;
}

int ArrayList::remove_front(){
    if(is_empty()) error("remove front from empty list");
    int* rem = my_array[0];
    number_of_elements--;
    delete rem;
    return value;
}

int ArrayList::remove_back(){
    if(is_empty()) error(" remove back from empty list");

    number_of_elements--;
    delete rem;
    return value;
}

int ArrayList::get_front() const{
    if(is_empty()) error("get front from empty list");
    return head -> getValue();
}

int ArrayList::get_back() const{
    if(is_empty()) error("Get back from empty list");
    return tail -> getValue();
}

int ArrayList::size() const{
    return number_of_elements;
}

bool ArrayList::is_empty() const{
    return number_of_elements == 0;
}


