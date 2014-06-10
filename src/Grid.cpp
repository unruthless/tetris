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
    for (int i = 0; i < cols; i++){
        vector<Tile> row;
        for (int j = 0; j < rows; j++) {
            row.push_back(Tile(ofPoint(i * Tile::WIDTH, j * Tile::HEIGHT)));
        }
        tiles.push_back(row);
    }
}

void Grid::draw()
{
    for (int i = 0; i < tiles.size(); i++) {
        for (int j = 0; j < tiles[i].size(); j++) {
            tiles[i][j].draw();
        }
    }
}

void Grid::slideDown(int rowIndex, int cols)
{
    ofLogNotice("sliding all rows above "+ ofToString(rowIndex));

    for (int i = rowIndex; i >= 0; i--){
        for (int j = 0; j < cols; j++) {
            if (i - 1 >= 0) {
                tiles[j][i].fill = tiles[j][i - 1].fill;
            } else {
                tiles[j][0].fill = ofColor::black;
            }
        }
    }
}

void Grid::pruneCompletedRows(int cols, int rows)
{
    ofLogNotice("pruning completed rows...");
    
    for (int i = rows - 1; i >= 0; i--) {
        bool isComplete = true;
        for (int j = 0; j < cols; j++) {
            if (tiles[j][i].fill == ofColor::black) {
                isComplete = false;
            }
        }
        if (isComplete) {
            Grid::slideDown(i, cols);
            i++;
        }
    }
}