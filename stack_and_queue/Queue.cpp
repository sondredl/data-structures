//
//  Queue.cpp
//  Stack_and_que
//
//  Created by Sondre Lindkjølen on 19/02/2020.
//  Copyright © 2020 Sondre Lindkjølen. All rights reserved.
//

#include "Queue.hpp"

Queue::Queue() {
//    list = new LinkedList();
    list = new ArrayList();
}

Queue::~Queue() {
    delete list;
}

void Queue::enqueue(int n) {
    list -> insert_back(n);
}

int Queue::deQueue() {
    return list -> remove_front();
}

int Queue::peek() const {
    return list -> get_front();
}

bool Queue::is_empty() const {
    return list -> is_empty();
}

int Queue::size() const {
    return list -> size();
}
