//
//  Tetromino.h
//  tetris
//
//  Created by Ruthie BenDor on 5/19/14.
//
//

#pragma once

#include "ofMain.h"
#include "Tile.h"

class Shape {
  
    //--------------------------------------------------------------
    public:

    Shape();
    ~Shape();
    void draw();
    void moveDown();
    void dropDown();
    bool isMovableLeft();
    bool isMovableRight();
    bool isMovableDown();
    void moveLeft();
    void moveRight();
    void rotateCW();
    void rotateCCW();

    bool hasCollided;
    void handleCollision();

    //--------------------------------------------------------------
    private:

    static const float TILE_WIDTH;
    static const float TILE_HEIGHT;
    
    static float shapeHeight;
    static float shapeWidth;

    vector<Tile> tiles;

    // Custom Shapes: F U S E P R O J C T
    // @todo
    
    // Standard Tetrominoes: I O T J L S Z
    ofPoint const STANDARD_SHAPES[7][4] = {
        { // 'I' tetromino
            ofPoint(0,  0),
            ofPoint(0, 10),
            ofPoint(0, 20),
            ofPoint(0, 30)
        },
        { // 'O' tetromino
            ofPoint( 0,  0),
            ofPoint( 0, 10),
            ofPoint(10,  0),
            ofPoint(10, 10)
        },
        { // 'T' tetromino
            ofPoint(  0, 10),
            ofPoint( 10,  0),
            ofPoint( 10, 10),
            ofPoint( 20, 10)
        },
        { // 'J' tetromino
            ofPoint( 10,  0),
            ofPoint( 10, 10),
            ofPoint( 10, 20),
            ofPoint(  0, 20)
        },
        { // 'L' tetromino
            ofPoint(  0,  0),
            ofPoint(  0, 10),
            ofPoint(  0, 20),
            ofPoint( 10, 20)
        },
        { // 'S' tetromino
            ofPoint(  0, 10),
            ofPoint( 10, 10),
            ofPoint( 10,  0),
            ofPoint( 20,  0)
        },
        { // 'Z' tetromino
            ofPoint(  0,  0),
            ofPoint( 10,  0),
            ofPoint( 10, 10),
            ofPoint( 20, 10)
        }
    };
};