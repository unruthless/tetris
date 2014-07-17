#pragma once

#include "Game.h"
#include "Grid.h"
#include "Tetromino.h"
#include "ofMain.h"

class ofApp : public ofBaseApp{

public:
    void setup();
    void update();
    void draw();
    void end();
    bool detectLeftCollision( vector<Tile> tiles );
    bool detectRightCollision( vector<Tile> tiles );
    bool detectBottomCollision( vector<Tile> tiles );
    void handleBottomCollision();
    void keyPressed(int key);
    /*inline void setGameOverCallback(const util::Callback<void ()>& callback) { onGameOver = callback; } */

    Grid grid;
    Tetromino tetromino;
    
private:
    bool gamePaused;
    bool gameOver;
    static int numCols;
    static int numRows;
    static const int SPEED = 500;
    unsigned long long frameNumber;
};
