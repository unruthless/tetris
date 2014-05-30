//
//  Tetromino.cpp
//  tetris
//
//  Created by Ruthie BenDor on 5/19/14.
//
//

#include "Tetromino.h"

const float Tetromino::TILE_WIDTH = 50;
const float Tetromino::TILE_HEIGHT = 50;
const float Tetromino::SCREEN_HEIGHT = 368;
float Tetromino::tetrominoWidth = 0;
float Tetromino::tetrominoHeight = 0;
float Tetromino::boundingBoxWidth = 0;
float Tetromino::boundingBoxHeight = 0;

Tetromino::Tetromino(){
    
    // i o t j l s z
    
    // Initialize Tetromino
    int randomIndex = floor(ofRandom(0,7));
    for (int i = 0; i < 4; i++){
        points.push_back(tetrominoes[randomIndex][i]);
    }
    
    // set the tetromino's width and height
    int xMax = 0;
    int yMax = 0;
    
    for (int i = 0; i < 4; i++) {
        if (points[i].x > xMax) {
            xMax = points[i].x;
        }
        if (points[i].y > yMax) {
            yMax = points[i].y;
        }
    }
    
    tetrominoWidth = TILE_WIDTH + xMax;
    tetrominoHeight = TILE_HEIGHT + yMax;
}

//--------------------------------------------------------------
Tetromino::~Tetromino(){
    ofLogNotice(ofToString("dead"));
}

//--------------------------------------------------------------
void Tetromino::init(){
    
}

//--------------------------------------------------------------
void Tetromino::reset(){
    // Resets the tetromino's position.
    // Called when bounding box collides with bottom of screen.

    points.clear();
    boundingBoxWidth = 0;
    boundingBoxHeight = 0;
}

//--------------------------------------------------------------
void Tetromino::update(){
    
    for (int i = 0; i < points.size(); i++){

        // Move on down
        points[i].y++;

        if (points[i].x > boundingBoxWidth) {
            boundingBoxWidth = points[i].x;
        }
        if (points[i].y > boundingBoxHeight) {
            boundingBoxHeight = points[i].y;
        }

        if (boundingBoxHeight - tetrominoHeight >= SCREEN_HEIGHT) {
            isOffscreen = true;
        }
    
    }
}

//--------------------------------------------------------------
void Tetromino::draw(){

    ofSetColor(ofColor::black);

    for (int i = 0; i < 4; i++) {
        ofRect(points[i].x, points[i].y, TILE_WIDTH, TILE_HEIGHT);
    }

}