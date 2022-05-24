//
//  ArrayList.hpp
//  Stack_and_que
//
//  Created by Sondre Lindkjølen on 26/02/2020.
//  Copyright © 2020 Sondre Lindkjølen. All rights reserved.
//

#pragma once
#include "Node.cpp"
// #include "../../std_lib_facilities.h"

class ArrayList{
    int* my_array;
    int number_of_elements;
    int* head;
    int* tail;
public:
    ArrayList();
    ~ArrayList();
    void insert_front(int);
    void insert_back(int);
    int remove_front();
    int remove_back();
    int get_front() const;
    int get_back() const;
    int size() const;
    bool is_empty() const;
};


