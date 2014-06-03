//
//  Tetromino.cpp
//  tetris
//
//  Created by Ruthie BenDor on 5/19/14.
//
//

#include "Tetromino.h"

const float Tetromino::TILE_WIDTH = 9;
const float Tetromino::TILE_HEIGHT = 9;
float Tetromino::tetrominoWidth = 0;
float Tetromino::tetrominoHeight = 0;

Tetromino::Tetromino(){
    
    // i o t j l s z
    
    // Initialize Tetromino
    int randomIndex = floor(ofRandom(0,7));
    for (int i = 0; i < 4; i++){
        points.push_back(startPositions[randomIndex][i]);
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
    tetrominoHeight = TILE_HEIGHT + yMax + 1;
}

//--------------------------------------------------------------
Tetromino::~Tetromino(){
    cout << "destruction of Tetromino instance" << endl;
}

//--------------------------------------------------------------
void Tetromino::reset(){
    cout << "Tetromino::reset()" << endl;
    
    // Resets the tetromino's position.
    // Called when bounding box collides with bottom of screen.

    points.clear();
}

//--------------------------------------------------------------
void Tetromino::update(){
    
    for (int i = 0; i < points.size(); i++){

        // Move on down
        points[i].y+=10;

        cout << "y pos" << points[i].y << " | tetromino height " << tetrominoHeight << " | screen height " <<  210 << endl;

        // Is this tile touching bottom?
        if (points[i].y + TILE_WIDTH + 1 == 210) {
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