//
//  Tetromino.cpp
//  tetris
//
//  Created by Ruthie BenDor on 5/19/14.
//
//

#include "Tetromino.h"

vector< vector<ofPoint> > Shapes::pts;

// -------------------------------------------------------------
Tetromino::Tetromino(){
    reset();
}

// -------------------------------------------------------------
Tetromino::~Tetromino(){
    cout << "Tetromino::~Tetromino()" << endl;
}

//--------------------------------------------------------------
void Tetromino::draw(){
    for (int i = 0; i < tiles.size(); i++) {
        tiles[i].draw();
    }
}

//--------------------------------------------------------------
void Tetromino::reset(){
    tiles.clear();
    vector<ofPoint> shape = Shapes::getRandom();

    ofColor colors[5] = {
                            ofColor::green,
                            ofColor::pink,
                            ofColor::red,
                            ofColor::aliceBlue,
                            ofColor::orange
                        };

    int thisColorIndex = ofRandom(0, shape.size());
    
    for (int i = 0; i < shape.size(); i++) {
        tiles.push_back(Tile(shape[i], colors[thisColorIndex], ofColor::white));
    }
    totalDrops = 0;

    //ofSetColor( ofRandom(0,255), ofRandom(0,255) , ofRandom(0,255) );
}

//--------------------------------------------------------------
void Tetromino::transform(vector<Tile> transformedTiles)
{
    tiles = transformedTiles;
}

//--------------------------------------------------------------
void Tetromino::drop(vector<Tile> transformedTiles){
    totalDrops++;
    tiles = transformedTiles;
    
    /*for (int i = 0; i < tiles.size(); i++) {
     tiles[i].drop();
     }*/
}

//--------------------------------------------------------------
vector<Tile> Tetromino::calculateRotationCW()
{
    vector<Tile> rotatedTiles = tiles;
    
    // Get the rotation origin coordinates
    int originX = rotatedTiles[0].x;
    int originY = rotatedTiles[0].y;

    for (int i = 0; i < rotatedTiles.size(); i++) {
        if (originX > rotatedTiles[i].x) {
            originX = rotatedTiles[i].x;
        }
        if (originY > rotatedTiles[i].y) {
            originY = rotatedTiles[i].y;
        }
    }
    
    originX += Tile::WIDTH;
    originY += Tile::HEIGHT;

    int translatedX, translatedY;
    int rotatedX, rotatedY;
    
    for (int i = 0; i < rotatedTiles.size(); i++) {
        
        // Translate tile coordinates to rotation origin.
        translatedX = rotatedTiles[i].x - originX;
        translatedY = rotatedTiles[i].y - originY;
        
        // Apply rotation matrix to translated coordinates.
        rotatedX = translatedY;
        rotatedY = translatedX * -1;
        
        // Revert translation and apply new coordinates to tile.
        rotatedTiles[i].x = rotatedX + originX;
        rotatedTiles[i].y = rotatedY + originY;
    }
    
    return rotatedTiles;
}

//--------------------------------------------------------------
vector<Tile> Tetromino::calculateRotationCCW()
{
    vector<Tile> rotatedTiles = tiles;
    
    // Get the rotation origin coordinates
    int originX = rotatedTiles[0].x;
    int originY = rotatedTiles[0].y;
    
    for (int i = 0; i < rotatedTiles.size(); i++) {
        if (originX > rotatedTiles[i].x) {
            originX = rotatedTiles[i].x;
        }
        if (originY > rotatedTiles[i].y) {
            originY = rotatedTiles[i].y;
        }
    }
    
    originX += Tile::WIDTH;
    originY += Tile::HEIGHT;

    int translatedX, translatedY;
    int rotatedX, rotatedY;
    
    for (int i = 0; i < rotatedTiles.size(); i++) {
        
        // Translate tile coordinates to rotation origin.
        translatedX = rotatedTiles[i].x - originX;
        translatedY = rotatedTiles[i].y - originY;
        
        // Apply rotation matrix to translated coordinates.
        rotatedX = translatedY * -1;
        rotatedY = translatedX;
        
        // Revert translation and apply new coordinates to tile.
        rotatedTiles[i].x = rotatedX + originX;
        rotatedTiles[i].y = rotatedY + originY;
    }
    
    return rotatedTiles;
}

//--------------------------------------------------------------
vector<Tile> Tetromino::calculateTranslationL()
{
    vector<Tile> translatedTiles = tiles;

    for (int i = 0; i < translatedTiles.size(); i++) {
        translatedTiles[i].x -= Tile::WIDTH;
    }
    
    return translatedTiles;
}

//--------------------------------------------------------------
vector<Tile> Tetromino::calculateTranslationR()
{
    vector<Tile> translatedTiles = tiles;

    for (int i = 0; i < translatedTiles.size(); i++) {
        translatedTiles[i].x += Tile::WIDTH;
    }
    
    return translatedTiles;
}

//--------------------------------------------------------------
vector<Tile> Tetromino::calculateTranslationD()
{
    vector<Tile> translatedTiles = tiles;
    
    for (int i = 0; i < translatedTiles.size(); i++) {
        translatedTiles[i].y += Tile::HEIGHT;
    }
    
    return translatedTiles;
}