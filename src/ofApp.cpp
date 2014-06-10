#include "ofApp.h"

int ofApp::numCols;
int ofApp::numRows;

void ofApp::setup()
{
    frameNumber = 0;
    ofSetFrameRate(60);
    ofSetBackgroundColor(ofColor::red);
// build game board //
    numCols = ofGetWidth() / Tile::WIDTH;
    numRows = ofGetHeight() / Tile::HEIGHT;
    Grid::init(numCols, numRows);
}

void ofApp::update()
{
    if (!paused && ofGetElapsedTimeMillis() - frameNumber > SPEED) {
        detectVerticalCollision();
        frameNumber = ofGetElapsedTimeMillis();
    }
}

void ofApp::draw()
{
    Grid::draw();
    tetromino.draw();
    ofSetColor(ofColor::white);
    ofDrawBitmapString(ofToString(ofGetFrameRate())+"fps", 10, 15);
}

void ofApp::keyPressed(int key)
{
    if (key == ' '){
        paused = !paused;
        ofLogNotice("paused :: "+ofToString(paused));
    }   else if (key == OF_KEY_LEFT){
        detectLeftCollision();
    }   else if (key == OF_KEY_RIGHT){
        detectRightCollision();
    }
}

void ofApp::detectVerticalCollision()
{
    bool collision = false;
    
    for (int k=0; k<tetromino.tiles.size(); k++) {
        int tx = tetromino.tiles[k].x;
        int ty = tetromino.tiles[k].y + Tile::HEIGHT;
        
        // lookup corresponding grid tile //
        Tile t = Grid::tiles[tx/Tile::WIDTH][ty/Tile::HEIGHT];
        if (ty == ofGetHeight() || (t.fill != ofColor::black && tx == t.x && ty == t.y)) collision = true;
    }
    
    if (!collision) {
        tetromino.drop();
    } else {
        for (int k=0; k<tetromino.tiles.size(); k++) {
            int tx = tetromino.tiles[k].x;
            int ty = tetromino.tiles[k].y;
            Grid::tiles[tx/Tile::WIDTH][ty/Tile::HEIGHT].fill = tetromino.tiles[k].fill;
        }
        Grid::pruneCompletedRows(numCols, numRows);
        tetromino.reset();
    }
}

void ofApp::detectLeftCollision()
{
    bool collision = false;
    for (int k=0; k<tetromino.tiles.size(); k++) {
        int tx = tetromino.tiles[k].x - Tile::WIDTH;
        int ty = tetromino.tiles[k].y;
        if (tx < 0){
            collision = true; break;
        }   else{
        // lookup corresponding grid tile //
            Tile t = Grid::tiles[tx/Tile::WIDTH][ty/Tile::HEIGHT];
            if (t.fill != ofColor::black && tx == t.x && ty == t.y) collision = true;
        }
    }
    if (!collision) {
        for (int i=0; i<tetromino.tiles.size(); i++) tetromino.tiles[i].x -= Tile::WIDTH;
    }
}

void ofApp::detectRightCollision()
{
    bool collision = false;
    for (int k=0; k<tetromino.tiles.size(); k++) {
        int tx = tetromino.tiles[k].x + Tile::WIDTH;
        int ty = tetromino.tiles[k].y;
        if (tx == ofGetWidth()){
            collision = true; break;
        }   else {
        // lookup corresponding grid tile //
            Tile t = Grid::tiles[tx/Tile::WIDTH][ty/Tile::HEIGHT];
            if (t.fill != ofColor::black && tx == t.x && ty == t.y) collision = true;
        }
    }
    if (!collision) {
        for (int i=0; i<tetromino.tiles.size(); i++) tetromino.tiles[i].x += Tile::WIDTH;
    }
}
