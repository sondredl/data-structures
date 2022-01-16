//
//  Stack.hpp
//  Stack_and_que
//
//  Created by Sondre Lindkjølen on 19/02/2020.
//  Copyright © 2020 Sondre Lindkjølen. All rights reserved.
//

#pragma once
#include "LinkedList.hpp"

class Stack {
    LinkedList* list;
//    ArrayList* list;
public:
    Stack();
    ~Stack();
    void push(int n);
    int pop();
    int top() const;
    int size() const;
    bool is_empty() const;
};
