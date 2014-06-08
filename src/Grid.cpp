//
//  Grid.cpp
//  tetris
//
//  Created by Stephen Braitsch on 6/8/14.
//
//

#include "Grid.h"

vector< vector<Tile> > Grid::tiles;

void Grid::init(int cols, int rows)
{
    ofLogNotice("grid = "+ofToString(rows) + " rows/" + ofToString(cols) + " cols");
    for(int i=0; i<cols; i++){
        vector<Tile> col;
        for(int j=0; j<rows; j++) col.push_back(Tile(ofPoint(i * Tile::WIDTH, j * Tile::HEIGHT)));
        tiles.push_back(col);
    }
}

void Grid::draw()
{
    for (int i=0; i<tiles.size(); i++) {
        for (int j=0; j<tiles[i].size(); j++) {
            tiles[i][j].draw();
        }
    }
}