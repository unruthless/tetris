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
        Tile(ofPoint pt, ofColor fill, ofColor stroke = ofColor(0x333333));
        ~Tile();
        int x;
        int y;
        ofColor fill;
        ofColor stroke;
        void draw();
        static const int WIDTH = 20;
        static const int HEIGHT = 20;

    private:
};