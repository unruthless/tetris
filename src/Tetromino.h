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

class Shapes {
    public:
        static vector<ofPoint> getRandom(){
            if (pts.empty()){
                
                /**
                 *
                 *  Standard Tetrominoes:
                 *
                 *  [*]                              [*]    [*]
                 *  [*]    [*][*]    [*][*][*]       [*]    [*]          [*][*]    [*][*]
                 *  [*]    [*][*]       [*]       [*][*]    [*][*]    [*][*]          [*][*]
                 *  [*]
                 */
                
                vector<ofPoint> I;
                I.push_back(ofPoint(0, 0));
                I.push_back(ofPoint(0, Tile::HEIGHT));
                I.push_back(ofPoint(0, Tile::HEIGHT*2));
                I.push_back(ofPoint(0, Tile::HEIGHT*3));
                pts.push_back(I);

                vector<ofPoint> O;
                O.push_back(ofPoint(0, 0));
                O.push_back(ofPoint(0, Tile::HEIGHT));
                O.push_back(ofPoint(Tile::WIDTH, 0));
                O.push_back(ofPoint(Tile::WIDTH, Tile::HEIGHT));
                pts.push_back(O);

                vector<ofPoint> T;
                T.push_back(ofPoint(0, Tile::HEIGHT));
                T.push_back(ofPoint(Tile::WIDTH, 0));
                T.push_back(ofPoint(Tile::WIDTH, Tile::HEIGHT));
                T.push_back(ofPoint(Tile::WIDTH*2, Tile::HEIGHT));
                pts.push_back(T);
                
                vector<ofPoint> J;
                J.push_back(ofPoint(Tile::WIDTH, 0));
                J.push_back(ofPoint(Tile::WIDTH, Tile::HEIGHT));
                J.push_back(ofPoint(Tile::WIDTH, Tile::HEIGHT*2));
                J.push_back(ofPoint(0, Tile::HEIGHT*2));
                pts.push_back(J);
                
                vector<ofPoint> L;
                L.push_back(ofPoint(0, 0));
                L.push_back(ofPoint(0, Tile::HEIGHT));
                L.push_back(ofPoint(0, Tile::HEIGHT*2));
                L.push_back(ofPoint(Tile::WIDTH, Tile::HEIGHT*2));
                pts.push_back(L);
                
                vector<ofPoint> S;
                S.push_back(ofPoint(0, Tile::HEIGHT));
                S.push_back(ofPoint(Tile::WIDTH, Tile::HEIGHT));
                S.push_back(ofPoint(Tile::WIDTH, 0));
                S.push_back(ofPoint(Tile::WIDTH*2, 0));
                pts.push_back(S);
                
                vector<ofPoint> Z;
                Z.push_back(ofPoint(0, 0));
                Z.push_back(ofPoint(Tile::WIDTH, 0));
                Z.push_back(ofPoint(Tile::WIDTH, Tile::HEIGHT));
                Z.push_back(ofPoint(Tile::WIDTH*2, Tile::HEIGHT));
                pts.push_back(Z);
                
                
                /**
                 *
                 *  Custom Tetrominoes:
                 *
                 *  [*][*][*]   [*][*][*]   [*][*][*]   [*]   [*]      [*][*]   [*][*][*]
                 *     [*]      [*]   [*]   [*][*]      [*]   [*]      [*]      [*][*]
                 *  [*][*][*]   [*]   [*]   [*]         [*][*][*]   [*][*]      [*][*][*]
                 *
                 *
                
                vector<ofPoint> I;
                I.push_back(ofPoint(0, 0));
                I.push_back(ofPoint(Tile::WIDTH, 0));
                I.push_back(ofPoint(Tile::WIDTH * 2, 0));
                I.push_back(ofPoint(Tile::WIDTH, Tile::HEIGHT));
                I.push_back(ofPoint(0,Tile::HEIGHT * 2));
                I.push_back(ofPoint(Tile::WIDTH, Tile::HEIGHT * 2));
                I.push_back(ofPoint(Tile::WIDTH * 2, Tile::HEIGHT * 2));
                pts.push_back(I);

                vector<ofPoint> N;
                N.push_back(ofPoint(0, 0));
                N.push_back(ofPoint(0, Tile::HEIGHT));
                N.push_back(ofPoint(0, Tile::HEIGHT * 2));
                N.push_back(ofPoint(Tile::WIDTH, 0));
                N.push_back(ofPoint(Tile::WIDTH * 2, Tile::HEIGHT * 2));
                N.push_back(ofPoint(Tile::WIDTH * 2, Tile::HEIGHT));
                N.push_back(ofPoint(Tile::WIDTH * 2, 0));
                pts.push_back(N);
                
                vector<ofPoint> F;
                F.push_back(ofPoint(0,0));
                F.push_back(ofPoint(Tile::WIDTH, 0));
                F.push_back(ofPoint(Tile::WIDTH*2, 0));
                F.push_back(ofPoint(0, Tile::HEIGHT));
                F.push_back(ofPoint(Tile::WIDTH, Tile::HEIGHT));
                F.push_back(ofPoint(0, Tile::HEIGHT*2));
                pts.push_back(F);

                vector<ofPoint> U;
                U.push_back(ofPoint(0, 0));
                U.push_back(ofPoint(0, Tile::HEIGHT));
                U.push_back(ofPoint(0, Tile::HEIGHT * 2));
                U.push_back(ofPoint(Tile::WIDTH, Tile::HEIGHT * 2));
                U.push_back(ofPoint(Tile::WIDTH * 2, Tile::HEIGHT * 2));
                U.push_back(ofPoint(Tile::WIDTH * 2, Tile::HEIGHT));
                U.push_back(ofPoint(Tile::WIDTH * 2, 0));
                pts.push_back(U);

                vector<ofPoint> S;
                S.push_back(ofPoint(Tile::WIDTH * 2, 0));
                S.push_back(ofPoint(Tile::WIDTH, 0));
                S.push_back(ofPoint(Tile::WIDTH, Tile::HEIGHT));
                S.push_back(ofPoint(Tile::WIDTH, Tile::HEIGHT * 2));
                S.push_back(ofPoint(0, Tile::HEIGHT * 2));
                pts.push_back(S);

                vector<ofPoint> E;
                E.push_back(ofPoint(0, 0));
                E.push_back(ofPoint(Tile::WIDTH, 0));
                E.push_back(ofPoint(Tile::WIDTH * 2, 0));
                E.push_back(ofPoint(0, Tile::HEIGHT));
                E.push_back(ofPoint(Tile::WIDTH, Tile::HEIGHT));
                E.push_back(ofPoint(0, Tile::HEIGHT * 2));
                E.push_back(ofPoint(Tile::WIDTH, Tile::HEIGHT * 2));
                E.push_back(ofPoint(Tile::WIDTH * 2, Tile::HEIGHT * 2));
                pts.push_back(E);
                */
                
            };
            int n = floor(ofRandom(0, pts.size()));
            return pts[n];
        };

    private:
        static vector< vector<ofPoint> > pts;
};

class Tetromino {
  
    public:
        Tetromino();
        ~Tetromino();
        void draw();
        void drop();
        void reset();
        void rotateCW();
        void rotateCCW();
        vector<Tile> tiles;
        int totalDrops = 0;

    private:
    
};


