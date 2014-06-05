//
//  Tetromino.cpp
//  tetris
//
//  Created by Ruthie BenDor on 5/19/14.
//
//

#include "Shape.h"

const float Shape::TILE_WIDTH = 9;
const float Shape::TILE_HEIGHT = 9;
float Shape::shapeWidth = 0;
float Shape::shapeHeight = 0;

// -------------------------------------------------------------
Shape::Shape(){
    cout << "Shape::Shape()" << endl;
    
    // Initialize shape
    int randomIndex = floor(ofRandom(0,7));
    
    //ofPoint points = startPositions[randomIndex];
    
    for (int i = 0; i < 4; i++){
        //points.push_back(startPositions[randomIndex][i]);
        tiles.push_back(Tile(startPositions[randomIndex][i]));
    }
}

// -------------------------------------------------------------
Shape::~Shape(){
    cout << "Shape::~Shape()" << endl;
}

//--------------------------------------------------------------
void Shape::draw(){
    
    ofSetColor(ofColor::black);

    for (int i = 0; i < tiles.size(); i++) {
        tiles[i].draw();
    }
}

//--------------------------------------------------------------
void Shape::moveDown(){
    
    for (int i = 0; i < tiles.size(); i++){
        
        tiles[i].moveDown();
        
        // @todo
        // check if tile has hit a tile beneath it;
        // if so, trigger collision handler.
    }
}

//--------------------------------------------------------------
void Shape::moveLeft(){
    
    for (int i = 0; i < tiles.size(); i++){
        
        tiles[i].moveLeft();
        
        // @todo
        // check if tile has hit left size of board;
        // if so, don't allow left move to happen.
    }
}

//--------------------------------------------------------------
void Shape::moveRight(){
    
    for (int i = 0; i < tiles.size(); i++){
        
        tiles[i].moveRight();
        
        // @todo
        // check if tile has hit right size of board;
        // if so, don't allow left move to happen.
    }
}

//--------------------------------------------------------------
void Shape::dropDown(){
    cout << "Shape::dropDown()" << endl;
}

//--------------------------------------------------------------
void Shape::rotateCW(){
    cout << "Shape::rotateCW()" << endl;
}

//--------------------------------------------------------------
void Shape::rotateCCW(){
    cout << "Shape::rotateCCW()" << endl;
}

//--------------------------------------------------------------
void Shape::handleCollision(){
    cout << "Shape::handleCollision()" << endl;
}

