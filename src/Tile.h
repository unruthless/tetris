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
        void update();

    private:

    ofPoint pt;
    static const int TILE_WIDTH = 9;
    static const int TILE_HEIGHT = 9;
};