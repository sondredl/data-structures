//
//  Stack.cpp
//  Stack_and_que
//
//  Created by Sondre Lindkjølen on 19/02/2020.
//  Copyright © 2020 Sondre Lindkjølen. All rights reserved.
//

#include "Stack.hpp"

Stack::Stack() {
    list = new LinkedList();
}

Stack::~Stack() {
    delete list;
}

void Stack::push(int n) {
    list -> insert_front(n);
}

int Stack::pop() {
    return list -> remove_front();
}

int Stack::top() const {
    return list -> get_front();
}

int Stack::size() const {
    return list -> size();
}
bool Stack::is_empty() const {
    return list -> is_empty();
    return (*list).is_empty();      // er lik linja over
}

