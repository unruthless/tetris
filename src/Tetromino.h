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
        void update();
        void draw();

    private:
        static float TILE_WIDTH;
        static float TILE_HEIGHT;
        static float SCREEN_WIDTH;
        static float SCREEN_HEIGHT;

        ofPoint point[7][4] = {
            {
                // 'I' Tetromino
                ofPoint(50,0),
                ofPoint(50,50),
                ofPoint(50,100),
                ofPoint(50,150)
            },
            {
                // 'O' Tetromino
                ofPoint(150,0),
                ofPoint(150,50),
                ofPoint(200,0),
                ofPoint(200,50)
            },
            {
                // 'T' Tetromino
                ofPoint(300,50),
                ofPoint(350,0),
                ofPoint(350,50),
                ofPoint(400,50)
            },
            {
                // 'J' Tetromino
                ofPoint(550,0),
                ofPoint(550,50),
                ofPoint(550,100),
                ofPoint(500,100)
            },
            {
                // 'L' Tetromino
                ofPoint(650,0),
                ofPoint(650,50),
                ofPoint(650,100),
                ofPoint(700,100)
            },
            {
                // 'S' Tetromino
                ofPoint(800,50),
                ofPoint(850,50),
                ofPoint(850,0),
                ofPoint(900,0)
            },
            {
                // 'Z' Tetromino
                ofPoint(1000,0),
                ofPoint(1050,0),
                ofPoint(1050,50),
                ofPoint(1100,50)
            }
        };

        ofPoint point_init[7][4] = {
            {
                // 'I' Tetromino
                ofPoint(50,0),
                ofPoint(50,50),
                ofPoint(50,100),
                ofPoint(50,150)
            },
            {
                // 'O' Tetromino
                ofPoint(150,0),
                ofPoint(150,50),
                ofPoint(200,0),
                ofPoint(200,50)
            },
            {
                // 'T' Tetromino
                ofPoint(300,50),
                ofPoint(350,0),
                ofPoint(350,50),
                ofPoint(400,50)
            },
            {
                // 'J' Tetromino
                ofPoint(550,0),
                ofPoint(550,50),
                ofPoint(550,100),
                ofPoint(500,100)
            },
            {
                // 'L' Tetromino
                ofPoint(650,0),
                ofPoint(650,50),
                ofPoint(650,100),
                ofPoint(700,100)
            },
            {
                // 'S' Tetromino
                ofPoint(800,50),
                ofPoint(850,50),
                ofPoint(850,0),
                ofPoint(900,0)
            },
            {
                // 'Z' Tetromino
                ofPoint(1000,0),
                ofPoint(1050,0),
                ofPoint(1050,50),
                ofPoint(1100,50)
            }
        };
};