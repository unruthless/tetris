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
    vector<Tile> transformedTiles;

    if ((!gamePaused) && (!gameOver) && (ofGetElapsedTimeMillis() - frameNumber > SPEED)) {
        transformedTiles = tetromino.calculateTranslationD();
        if (!detectBottomCollision(transformedTiles)){
            tetromino.drop(transformedTiles);
        } else {
            handleBottomCollision();
        }
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
    vector<Tile> transformedTiles;
    
    switch (key) {
        case ' ':
            gamePaused = !gamePaused;
            break;
        
        case OF_KEY_LEFT:
            transformedTiles = tetromino.calculateTranslationL();
            if (!detectLeftCollision(transformedTiles)) {
                tetromino.transform(transformedTiles);
            }
            break;

        case OF_KEY_RIGHT:
            transformedTiles = tetromino.calculateTranslationR();
            if (!detectRightCollision(transformedTiles)) {
                tetromino.transform(transformedTiles);
            }
            break;
            
        case OF_KEY_DOWN:
            transformedTiles = tetromino.calculateTranslationD();
            if (!detectBottomCollision(transformedTiles)){
                tetromino.drop(transformedTiles);
            }
            break;

        case 'a':
            transformedTiles = tetromino.calculateRotationCW();
            if (!detectLeftCollision(transformedTiles) && !detectRightCollision(transformedTiles)) {
                tetromino.transform(transformedTiles);
            }
            break;

        case 's':
            transformedTiles = tetromino.calculateRotationCCW();
            if (!detectLeftCollision(transformedTiles) && !detectRightCollision(transformedTiles)) {
                tetromino.transform(transformedTiles);
            }
            break;
            
        default:
            break;
    }
}

bool ofApp::detectBottomCollision( vector<Tile> tiles )
{
    bool collision = false;
    
    for (int i = 0; i < tiles.size(); i++) {
        if (tiles[i].y >= Grid::HEIGHT) {
            // have we hit the bottom of the screen?
            collision = true;
            break;
        } else {
            // have we hit an existing tile?
            Tile t = Grid::tiles[tiles[i].x/Tile::WIDTH][tiles[i].y/Tile::HEIGHT];
            if (t.fill != ofColor::black && tiles[i].x == t.x && tiles[i].y == t.y) {
                collision = true;
                break;
            }
        }
    }
    
    return (collision) ? true : false;
}

void ofApp::handleBottomCollision() {
    
    for (int i = 0; i < tetromino.tiles.size(); i++) {
        Grid::tiles[ tetromino.tiles[i].x / Tile::WIDTH ][ tetromino.tiles[i].y / Tile::HEIGHT ].fill = tetromino.tiles[i].fill;
    }
    Grid::pruneCompletedRows(numCols, numRows);
    
    if (tetromino.totalDrops == 0) {
        end();
    } else {
        tetromino.reset();
    }
}

bool ofApp::detectLeftCollision( vector<Tile> tiles )
{
    bool collision = false;
    
    for (int i = 0; i < tiles.size(); i++) {
        
        if (tiles[i].x < 0) {
            // have we hit the left side of the screen?
            collision = true;
            break;
        } else {
            // have we hit an existing tile?
            Tile t = Grid::tiles[ tiles[i].x / Tile::WIDTH ][ tiles[i].y / Tile::HEIGHT ]; // there's something buggy here
            if (t.fill != ofColor::black && tiles[i].x == t.x && tiles[i].y == t.y) {
                collision = true;
                break;
            }
        }
    }

    return (collision) ? true : false;
}

bool ofApp::detectRightCollision( vector<Tile> tiles )
{
    bool collision = false;
    
    for (int i = 0; i < tiles.size(); i++) {
        
        if (tiles[i].x == Grid::WIDTH){
            // have we hit the right side of the screen?
            collision = true;
            break;
        } else {
            // have we hit an existing tile?a
            Tile t = Grid::tiles[tiles[i].x/Tile::WIDTH][tiles[i].y/Tile::HEIGHT];
            if (t.fill != ofColor::black && tiles[i].x == t.x && tiles[i].y == t.y) {
                collision = true;
                break;
            }
        }
    }
    
    return (collision) ? true : false;
}