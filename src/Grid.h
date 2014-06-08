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
        static vector< vector<Tile> > tiles;
        static void draw();
        static void init(int rows, int cols);
    
    private:
};
