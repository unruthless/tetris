//
//  Tile.h
//  tetris
//
//  Created by Ruthie BenDor on 5/29/14.
//
//

#pragma once

#include "ofMain.h"

class Tile {

    public:

        Tile(ofPoint pt);
        ~Tile();
        void draw();
        void moveDown();
        void moveLeft();
        void moveRight();
        bool isAtLeftEdge();
        bool isAtRightEdge();
        bool isAtBottomEdge();
    
    private:

        ofPoint pt;
        static const int TILE_WIDTH = 9;
        static const int TILE_HEIGHT = 9;
};