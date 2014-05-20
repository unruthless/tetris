//
//  Tetromino.cpp
//  tetris
//
//  Created by Ruthie BenDor on 5/19/14.
//
//

#include "Tetromino.h"

float Tetromino::TILE_WIDTH = 49;
float Tetromino::TILE_HEIGHT = 49;
float Tetromino::SCREEN_HEIGHT = 768;

Tetromino::Tetromino(){
    // ofLogNotice(ofToString());
}

//--------------------------------------------------------------
void Tetromino::update(){

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 4; j++) {

            // Move on down
            point[i][j].y++;

            // If this block has fallen off screen,
            // reset all four points for this tetromino.
            if (point[i][j].y > SCREEN_HEIGHT - TILE_HEIGHT - 1) {
                point[i][0].y = point_init[i][0].y;
                point[i][1].y = point_init[i][1].y;
                point[i][2].y = point_init[i][2].y;
                point[i][3].y = point_init[i][3].y;
                break;
            }
        }
    }
}

//--------------------------------------------------------------
void Tetromino::draw(){

    ofSetColor(ofColor::black);

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 4; j++) {
            ofRect(point[i][j].x, point[i][j].y, TILE_WIDTH, TILE_HEIGHT);
        }
    }
}