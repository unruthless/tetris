//
//  Tile.cpp
//  tetris
//
//  Created by Ruthie BenDor on 5/29/14.
//
//

#include "Tile.h"

Tile::Tile(ofPoint pt, ofColor f, ofColor s)
{
    x = pt.x;
    y = pt.y;
    fill = f;
    stroke = s;
};

Tile::~Tile() { };

void Tile::draw()
{
    ofPushStyle();{
        ofSetColor(stroke);
        ofRect(x, y, WIDTH, HEIGHT);
        ofFill();
        ofSetColor(fill);
        ofRect(x+1, y+1, WIDTH-2, HEIGHT-2);
    }; ofPopStyle();
};

void Tile::drop()
{
    y += HEIGHT;
};
