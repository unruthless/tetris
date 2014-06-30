#pragma once

#include "Game.h"
#include "Grid.h"
#include "Tetromino.h"
#include "ofMain.h"
#include "callback.hpp"

class ofApp : public ofBaseApp{

    public:
		void setup();
		void update();
		void draw();
        void end();
        void detectVerticalCollision();
        void detectLeftCollision();
        void detectRightCollision();
		void keyPressed(int key);
        inline void setGameOverCallback(const util::Callback<void ()>& callback) { onGameOver = callback; }
    
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
