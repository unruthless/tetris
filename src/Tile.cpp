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

void Tile::moveDown(){
    pt.y += 10;
};

void Tile::moveLeft(){
    pt.x -= 10;
};

void Tile::moveRight(){
    pt.x += 10;
};

bool Tile::isAtLeftEdge(){
    if (pt.x == 0) {
        return true;
    } else {
        return false;
    }
}

bool Tile::isAtRightEdge(){
    if (pt.x == 290) {
        return true;
    } else {
        return false;
    }
}

bool Tile::isAtBottomEdge(){
    if (pt.y + 9 + 1 == 420) {
        return true;
    } else {
        return false;
    }
}