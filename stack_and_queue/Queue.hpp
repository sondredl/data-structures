//
//  Queue.hpp
//  Stack_and_que
//
//  Created by Sondre Lindkjølen on 19/02/2020.
//  Copyright © 2020 Sondre Lindkjølen. All rights reserved.
//

#pragma once
//#include "LinkedList.hpp"
#include "ArrayList.hpp"

class Queue {
//    LinkedList* list;
    ArrayList* std::list
public:
    Queue();
    ~Queue();
    void enqueue(int);
    int deQueue();
    int peek() const;
    bool is_empty() const;
    int size() const;
};
