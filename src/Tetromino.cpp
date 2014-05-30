//
//  Tetromino.cpp
//  tetris
//
//  Created by Ruthie BenDor on 5/19/14.
//
//

#include "Tetromino.h"

float Tetromino::TILE_WIDTH = 50;
float Tetromino::TILE_HEIGHT = 50;
float Tetromino::SCREEN_HEIGHT = 368;
float Tetromino::TETROMINO_WIDTH = 0;
float Tetromino::TETROMINO_HEIGHT = 0;
float Tetromino::BOUNDING_BOX_WIDTH = 0;
float Tetromino::BOUNDING_BOX_HEIGHT = 0;

Tetromino::Tetromino(){
    
    // i o t j l s z
    
    // Initialize Tetromino
    float random = ofRandom(1,7);
    int thisTetrominoIndex = floor(random + 0.5);
    //ofLogNotice(ofToString(thisTetrominoIndex));
    
    for (int i = 0; i < 4; i++){
        // @todo randomize this based on thisTetrominoIndex above
        points.push_back(tetromino_s[i]);
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
    
    TETROMINO_WIDTH = TILE_WIDTH + xMax;
    TETROMINO_HEIGHT = TILE_HEIGHT + yMax;
    
    ofLogNotice(ofToString(TETROMINO_WIDTH));
    ofLogNotice(ofToString(TETROMINO_HEIGHT));
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
    for (int i = 0; i < 4; i++){
        points.push_back(tetromino_l[i]);
    }

    BOUNDING_BOX_WIDTH = 0;
    BOUNDING_BOX_HEIGHT = 0;
}

//--------------------------------------------------------------
void Tetromino::update(){
    
    for (int i = 0; i < points.size(); i++){

        // Move on down
        points[i].y++;

        if (points[i].x > BOUNDING_BOX_WIDTH) {
            BOUNDING_BOX_WIDTH = points[i].x;
        }
        if (points[i].y > BOUNDING_BOX_HEIGHT) {
            BOUNDING_BOX_HEIGHT = points[i].y;
        }

        // ofLogNotice(ofToString(BOUNDING_BOX_WIDTH));
        // ofLogNotice(ofToString(BOUNDING_BOX_HEIGHT));

        if (BOUNDING_BOX_HEIGHT - TETROMINO_HEIGHT >= SCREEN_HEIGHT) {
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