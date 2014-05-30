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
    
        static const float SCREEN_WIDTH;
        static const float SCREEN_HEIGHT;
    
        static float tetrominoHeight;
        static float tetrominoWidth;

        static float boundingBoxWidth;
        static float boundingBoxHeight;

        vector<ofPoint> points;

        static const int NUM_TETROMINOES = 7;
        ofPoint const tetrominoes[NUM_TETROMINOES][4] = {
            { // 'I' tetromino
                ofPoint(0,   0),
                ofPoint(0,  50),
                ofPoint(0, 100),
                ofPoint(0, 150)
            },
            { // 'O' tetromino
                ofPoint( 0,  0),
                ofPoint( 0, 50),
                ofPoint(50,  0),
                ofPoint(50, 50)
            },
            { // 'T' tetromino
                ofPoint(  0, 50),
                ofPoint( 50,  0),
                ofPoint( 50, 50),
                ofPoint(100, 50)
            },
            { // 'J' tetromino
                ofPoint( 50,   0),
                ofPoint( 50,  50),
                ofPoint( 50, 100),
                ofPoint(  0, 100)
            },
            { // 'L' tetromino
                ofPoint(  0,   0),
                ofPoint(  0,  50),
                ofPoint(  0, 100),
                ofPoint( 50, 100)
            },
            { // 'S' tetromino
                ofPoint(   0, 50),
                ofPoint(  50, 50),
                ofPoint(  50,  0),
                ofPoint( 100,  0)
            },
            { // 'Z' tetromino
                ofPoint(   0,  0),
                ofPoint(  50,  0),
                ofPoint(  50, 50),
                ofPoint( 100, 50)
            }
        };
};