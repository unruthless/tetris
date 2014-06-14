//
//  Grid.h
//  tetris
//
//  Created by Stephen Braitsch on 6/8/14.
//
//

#pragma once
#include "Tile.h"

class Grid{
  
    public:
        Grid() {};
        ~Grid() {};
        static vector< vector<Tile> > tiles;
        static void draw();
        static void init(int rows, int cols);
        static void slideDown(int rowIndex, int cols);
        static void pruneCompletedRows(int rows, int cols);
    private:
};
