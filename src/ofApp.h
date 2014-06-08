#pragma once

#include "Grid.h"
#include "Tetromino.h"
#include "ofMain.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
        void detectVerticalCollision();
        void detectLeftCollision();
        void detectRightCollision();
		void keyPressed(int key);
    
        Grid grid;
        Tetromino tetromino;
    
    private:
        bool paused;
        static int numCols;
        static int numRows;
        static const int SPEED = 1000;
        unsigned long long frameNumber;
};
