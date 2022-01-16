//
//  LinkedList.hpp
//  Stack_and_que
//
//  Created by Sondre Lindkjølen on 17/02/2020.
//  Copyright © 2020 Sondre Lindkjølen. All rights reserved.
//

#pragma once
#include "Node.hpp"
#include "../std_lib_facilities.h"
//#include <iostream>

class LinkedList{
    unsigned int no_of_elements;
    Node* head;
    Node* tail;
public:
    LinkedList();
    ~LinkedList();
    void insert_front(int);
    void insert_back(int);
    int remove_front();
    int remove_back();
    int get_front() const;
    int get_back() const;
    int size() const;
    bool is_empty() const;
};
