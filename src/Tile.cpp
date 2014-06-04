//
//  Tile.cpp
//  tetris
//
//  Created by Ruthie BenDor on 5/29/14.
//
//

#include "Tile.h"

//const float Tetromino::TILE_WIDTH = 9;
//const float Tetromino::TILE_HEIGHT = 9;

Tile::Tile(ofPoint point){
    cout << "create Tile instance" << endl;
    pt = point;
};

Tile::~Tile(){
};

void Tile::draw(){
    ofRect(pt.x, pt.y, TILE_WIDTH, TILE_HEIGHT);
};

void Tile::update(){
    pt.y += 10;
};