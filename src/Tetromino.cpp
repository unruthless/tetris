//
//  Tetromino.cpp
//  tetris
//
//  Created by Ruthie BenDor on 5/19/14.
//
//

#include "Tetromino.h"

vector< vector<ofPoint> > Shapes::pts;

// -------------------------------------------------------------
Tetromino::Tetromino(){
    reset();
}

// -------------------------------------------------------------
Tetromino::~Tetromino(){
    cout << "Tetromino::~Tetromino()" << endl;
}

//--------------------------------------------------------------
void Tetromino::draw(){
    for (int i = 0; i < tiles.size(); i++) {
        tiles[i].draw();
    }
}

void Tetromino::drop(){
    for (int i = 0; i < tiles.size(); i++) {
        tiles[i].drop();
    }
}

void Tetromino::reset(){
    tiles.clear();
    vector<ofPoint> shape = Shapes::getRandom();
    for (int i = 0; i < shape.size(); i++) tiles.push_back(Tile(shape[i], ofColor::green, ofColor::white));
}

void Tetromino::rotateCW()
{
    ofLogNotice("rotating clockwise");
    
    // Get the rotation origin coordinates
    int originX = tiles[0].x;
    int originY = tiles[0].y;
    
    for (int i = 0; i < tiles.size(); i++) {
        if (originX > tiles[i].x) {
            originX = tiles[i].x;
        }
        if (originY > tiles[i].y) {
            originY = tiles[i].y;
        }
    }
    
    originX += Tile::WIDTH;
    originY += Tile::HEIGHT;
    
    // For each tile,

    int translatedX, translatedY;
    int rotatedX, rotatedY;
    
    for (int i = 0; i < tiles.size(); i++) {
        
        // Translate tile coordinates to rotation origin.
        translatedX = tiles[i].x - originX;
        translatedY = tiles[i].y - originY;
        
        // Apply rotation matrix to translated coordinates.
        rotatedX = translatedY;
        rotatedY = translatedX * -1;

        // Revert translation and apply new coordinates to tile.
        tiles[i].x = rotatedX + originX;
        tiles[i].y = rotatedY + originY;
    }
}

void Tetromino::rotateCCW()
{
    ofLogNotice("rotating counterclockwise");

    // Get the rotation origin coordinates
    int originX = tiles[0].x;
    int originY = tiles[0].y;
    
    for (int i = 0; i < tiles.size(); i++) {
        if (originX > tiles[i].x) {
            originX = tiles[i].x;
        }
        if (originY > tiles[i].y) {
            originY = tiles[i].y;
        }
    }
    
    originX += Tile::WIDTH;
    originY += Tile::HEIGHT;
    
    // For each tile,
    
    int translatedX, translatedY;
    int rotatedX, rotatedY;
    
    for (int i = 0; i < tiles.size(); i++) {
        
        // Translate tile coordinates to rotation origin.
        translatedX = tiles[i].x - originX;
        translatedY = tiles[i].y - originY;
        
        // Apply rotation matrix to translated coordinates.
        rotatedX = translatedY * -1;
        rotatedY = translatedX;
        
        // Revert translation and apply new coordinates to tile.
        tiles[i].x = rotatedX + originX;
        tiles[i].y = rotatedY + originY;
    }
}