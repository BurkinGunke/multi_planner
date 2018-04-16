//
//  Node.h
//  path_finder
//
//  Created by Aleksandar Babunovic on 2018-03-05.
//  Copyright © 2018 Aleksandar Babunovic. All rights reserved.
//

#ifndef Node_h
#define Node_h

#include "Point2D.h"

class Node {
private:
    Point2D** neighbours;
    Point2D* pos;
    Node* parent;
    int taken;


public:
    Node(Point2D**, Point2D*);
    ~Node();
    Point2D** getNeighbours();
    Point2D* getPosition();

    int isTaken(int);
    void take(int);

    bool equals(Node*);
    void setParent(Node*);
};

#endif /* Node_h */
