//
//  Node.cpp
//  Stack_and_que
//
//  Created by Sondre Lindkjølen on 17/02/2020.
//  Copyright © 2020 Sondre Lindkjølen. All rights reserved.
//

#include "Node.hpp"

Node::Node(int v, Node* n, Node* p)
    : value(v), next(n), previous(p) {}
    
Node* Node::getNext() const{
    return next;
}

Node* Node::getPrevious() const{
    return previous;
}

int Node::getValue() const{
    return value;
}
void Node::setNext(Node* n){
    next = n;
}
void Node::setPrevious(Node* p){
    previous = p;
}

