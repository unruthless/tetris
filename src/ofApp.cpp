#include "ofApp.h"

int ofApp::numCols = 15;
int ofApp::numRows = 23;

void ofApp::setup()
{
    frameNumber = 0;
    ofSetFrameRate(60);
    ofSetBackgroundColor(ofColor::red);

    Grid::init(numCols, numRows);
}

void ofApp::update()
{
    if ((!gamePaused) && (!gameOver) && (ofGetElapsedTimeMillis() - frameNumber > SPEED)) {
        detectVerticalCollision();
        frameNumber = ofGetElapsedTimeMillis();
    }
}

void ofApp::end()
{
    gameOver = true;
    ofLogNotice("game over!");
    Grid::init(numCols, numRows);
}

void ofApp::draw()
{
    Grid::draw();
    tetromino.draw();
    /*ofSetColor(ofColor::white);
    ofDrawBitmapString(ofToString(ofGetFrameRate())+"fps", 10, 15); */
}

void ofApp::keyPressed(int key)
{
    switch (key) {
        case ' ':
            gamePaused = !gamePaused;
            break;
        
        case OF_KEY_LEFT:
            detectLeftCollision();
            break;

        case OF_KEY_RIGHT:
            detectRightCollision();
            break;
            
        case OF_KEY_DOWN:
            detectVerticalCollision();
            break;

        case 'a':
            tetromino.rotateCW();
            break;

        case 's':
            tetromino.rotateCCW();
            break;
            
        default:
            break;
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
        if (ty >= Grid::HEIGHT || (t.fill != ofColor::black && tx == t.x && ty == t.y)) {
            collision = true;
        }
        ofLogNotice(ofToString(ty));
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

        if (tetromino.totalDrops == 0) {
            end();
        } else {
            tetromino.reset();
        }
    }
}

void ofApp::detectLeftCollision()
{
    bool collision = false;
    
    for (int k=0; k<tetromino.tiles.size(); k++) {
        
        int tx = tetromino.tiles[k].x - Tile::WIDTH;
        int ty = tetromino.tiles[k].y;
        
        if (tx < 0){
            collision = true;
            break;
        } else {
            // lookup corresponding grid tile //
            Tile t = Grid::tiles[tx/Tile::WIDTH][ty/Tile::HEIGHT];
            if (t.fill != ofColor::black && tx == t.x && ty == t.y) {
                collision = true;
            }
        }
    }
    
    if (!collision) {
        for (int i=0; i<tetromino.tiles.size(); i++) {
            tetromino.tiles[i].x -= Tile::WIDTH;
        }
    }
}

void ofApp::detectRightCollision()
{
    bool collision = false;
    
    for (int k=0; k<tetromino.tiles.size(); k++) {
        
        int tx = tetromino.tiles[k].x + Tile::WIDTH;
        int ty = tetromino.tiles[k].y;
        
        if (tx == Grid::WIDTH){
            collision = true;
            break;
        } else {
            // lookup corresponding grid tile //
            Tile t = Grid::tiles[tx/Tile::WIDTH][ty/Tile::HEIGHT];
            if (t.fill != ofColor::black && tx == t.x && ty == t.y) {
                collision = true;
            }
        }
    }
    
    if (!collision) {
        for (int i=0; i<tetromino.tiles.size(); i++) {
            tetromino.tiles[i].x += Tile::WIDTH;
        }
    }
}