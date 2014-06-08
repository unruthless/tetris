//
//  Tetromino.cpp
//  tetris
//
//  Created by Ruthie BenDor on 5/19/14.
//
//

#include "Tetromino.h"

vector< vector<ofPoint> > Shapes::pts;
const std::string Shapes::names[7] = {"I", "O", "T", "J", "L", "S", "Z"};

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
    for (int i = 0; i < tiles.size(); i++) tiles[i].draw();
}

void Tetromino::drop(){
    for (int i = 0; i < tiles.size(); i++) tiles[i].drop();
}

void Tetromino::reset(){
    tiles.clear();
    vector<ofPoint> shape = Shapes::getRandom();
    for (int i = 0; i < shape.size(); i++) tiles.push_back(Tile(shape[i], ofColor::green, ofColor::white));
}
