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

vector< vector<ofPoint> > Shapes::pts;
const std::string Shapes::names[7] = {"I", "O", "T", "J", "L", "S", "Z"};

// -------------------------------------------------------------
Shape::Shape(){
    
    // Initialize shape
    vector<ofPoint> shape = Shapes::getRandom();
    for (int i = 0; i < shape.size(); i++) tiles.push_back(Tile(shape[i]));
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
    }
}

bool Shape::isMovableLeft() {

    for (int i = 0; i < tiles.size(); i++){
        if (tiles[i].isAtLeftEdge()) {
            return false;
        }
    }
    return true;
}


bool Shape::isMovableRight() {

    for (int i = 0; i < tiles.size(); i++){
        if (tiles[i].isAtRightEdge()) {
            return false;
        }
    }
    return true;
}


bool Shape::isMovableDown() {

    for (int i = 0; i < tiles.size(); i++){
        if (tiles[i].isAtBottomEdge()) {
            return false;
        }
    }
    return true;
}


//--------------------------------------------------------------
void Shape::moveLeft(){
    
    for (int i = 0; i < tiles.size(); i++){
        tiles[i].moveLeft();
    }
}

//--------------------------------------------------------------
void Shape::moveRight(){
    
    for (int i = 0; i < tiles.size(); i++){
        tiles[i].moveRight();
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

