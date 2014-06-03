//
//  Tetromino.h
//  tetris
//
//  Created by Ruthie BenDor on 5/19/14.
//
//

#pragma once

#include "ofMain.h"

class Tetromino {
  
    public:
        Tetromino();
        ~Tetromino();
        void init();
        void reset();
        void update();
        void draw();
        bool isOffscreen;

    private:
        static const float TILE_WIDTH;
        static const float TILE_HEIGHT;
        
        static float tetrominoHeight;
        static float tetrominoWidth;

        vector<ofPoint> points;

        static const int NUM_TETROMINOES = 7;
        ofPoint const startPositions[NUM_TETROMINOES][4] = {
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
            { // 'S' tetromino -
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