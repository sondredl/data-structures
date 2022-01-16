//
//  Node.hpp
//  Stack_and_que
//
//  Created by Sondre Lindkjølen on 17/02/2020.
//  Copyright © 2020 Sondre Lindkjølen. All rights reserved.
//

#pragma once

class Node{
    int value;
    Node* next;
    Node* previous;
public:
    Node(int, Node*, Node*);
    Node* getNext() const;
    Node* getPrevious() const;
    int getValue() const;
    void setNext(Node*);
    void setPrevious(Node*);
    
};
