//
//  Tetromino.h
//  tetris
//
//  Created by Ruthie BenDor on 5/19/14.
//
//

#pragma once

#include "ofMain.h"
#include "Tile.h"

class Shapes{
    public:
        static vector<ofPoint> getRandom(){
            if (pts.empty()){
        // Standard Tetrominoes: I O T J L S Z
                vector<ofPoint> I;
                I.push_back(ofPoint(0, 0));
                I.push_back(ofPoint(0, 10));
                I.push_back(ofPoint(0, 20));
                I.push_back(ofPoint(0, 30));
                pts.push_back(I);
                vector<ofPoint> O;
                O.push_back(ofPoint(0, 0));
                O.push_back(ofPoint(0, 10));
                O.push_back(ofPoint(10, 0));
                O.push_back(ofPoint(10, 10));
                pts.push_back(O);
                vector<ofPoint> T;
                T.push_back(ofPoint(0, 10));
                T.push_back(ofPoint(10, 0));
                T.push_back(ofPoint(10, 10));
                T.push_back(ofPoint(20, 10));
                pts.push_back(T);
                vector<ofPoint> J;
                J.push_back(ofPoint(10, 0));
                J.push_back(ofPoint(10, 10));
                J.push_back(ofPoint(10, 20));
                J.push_back(ofPoint(0, 20));
                pts.push_back(J);
                vector<ofPoint> L;
                L.push_back(ofPoint(0, 0));
                L.push_back(ofPoint(0, 10));
                L.push_back(ofPoint(0, 20));
                L.push_back(ofPoint(10, 20));
                pts.push_back(L);
                vector<ofPoint> S;
                S.push_back(ofPoint(0, 10));
                S.push_back(ofPoint(10, 10));
                S.push_back(ofPoint(10, 0));
                S.push_back(ofPoint(20, 0));
                pts.push_back(S);
                vector<ofPoint> Z;
                Z.push_back(ofPoint(0, 0));
                Z.push_back(ofPoint(10, 0));
                Z.push_back(ofPoint(10, 10));
                Z.push_back(ofPoint(20, 10));
                pts.push_back(Z);
            };
            int n = floor(ofRandom(0, pts.size()-1));
            ofLogNotice("New Tetrominoe -> "+names[n]);
            return pts[n];
        }
    private:
        static const std::string names[7];
        static vector< vector<ofPoint> > pts;
};

class Shape {
  
    //--------------------------------------------------------------
    public:

    Shape();
    ~Shape();
    void draw();
    void moveDown();
    void dropDown();
    bool isMovableLeft();
    bool isMovableRight();
    bool isMovableDown();
    void moveLeft();
    void moveRight();
    void rotateCW();
    void rotateCCW();

    bool hasCollided;
    void handleCollision();

    //--------------------------------------------------------------
    private:

    static const float TILE_WIDTH;
    static const float TILE_HEIGHT;
    
    static float shapeHeight;
    static float shapeWidth;

    vector<Tile> tiles;
    
};


