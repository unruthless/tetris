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
        static float TILE_WIDTH;
        static float TILE_HEIGHT;
        static float SCREEN_WIDTH;
        static float SCREEN_HEIGHT;
        static float TETROMINO_WIDTH;
        static float TETROMINO_HEIGHT;
        static float BOUNDING_BOX_WIDTH;
        static float BOUNDING_BOX_HEIGHT;

        vector<ofPoint> points;
    
        // 'I' Tetromino
        ofPoint tetromino_i[4] = {
            ofPoint(0,   0),
            ofPoint(0,  50),
            ofPoint(0, 100),
            ofPoint(0, 150)
        };
    
        // 'O' Tetromino
        ofPoint tetromino_o[4] = {
            ofPoint( 0,  0),
            ofPoint( 0, 50),
            ofPoint(50,  0),
            ofPoint(50, 50)
        };
    
        // 'T' Tetromino
        ofPoint tetromino_t[4] = {
            ofPoint(  0, 50),
            ofPoint( 50,  0),
            ofPoint( 50, 50),
            ofPoint(100, 50)
        };
    
        // 'J' Tetromino
        ofPoint tetromino_j[4] = {
            ofPoint( 50,   0),
            ofPoint( 50,  50),
            ofPoint( 50, 100),
            ofPoint(  0, 100)
        };

        // 'L' Tetromino
        ofPoint tetromino_l[4] = {
            ofPoint(  0,   0),
            ofPoint(  0,  50),
            ofPoint(  0, 100),
            ofPoint( 50, 100)
        };

        // 'S' Tetromino
        ofPoint tetromino_s[4] = {
            ofPoint(   0, 50),
            ofPoint(  50, 50),
            ofPoint(  50,  0),
            ofPoint( 100,  0)
        };
    
        // 'Z' Tetromino
        ofPoint tetromino_z[4] = {
            ofPoint(   0,  0),
            ofPoint(  50,  0),
            ofPoint(  50, 50),
            ofPoint( 100, 50)
        };
};