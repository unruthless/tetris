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
    for (int i = 0; i < 4; i++){
        points.push_back(startPositions[randomIndex][i]);
    }
    
    // Set the shape's width and height
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
    shapeWidth = TILE_WIDTH + xMax;
    shapeHeight = TILE_HEIGHT + yMax + 1;
}

// -------------------------------------------------------------
Shape::~Shape(){
    cout << "Shape::~Shape()" << endl;
}

//--------------------------------------------------------------
void Shape::draw(){
    
    ofSetColor(ofColor::black);
    
    for (int i = 0; i < 4; i++) {
        ofRect(points[i].x, points[i].y, TILE_WIDTH, TILE_HEIGHT);
    }
}

//--------------------------------------------------------------
void Shape::moveDown(){
    
    for (int i = 0; i < points.size(); i++){
        
        // Move on down
        points[i].y+=10;
        
        cout << "y pos" << points[i].y << " | shape height " << shapeHeight << " | screen height " <<  210 << endl;
        
        // Is this tile touching bottom?
        if (points[i].y + TILE_WIDTH + 1 == 210) {
            hasCollided = true;
        }
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

