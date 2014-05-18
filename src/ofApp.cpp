#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(0, 0, 0);

    float width = 49;
    float height = 49;
    
    // 'I' Tetromino
    ofRect(50, 100, width, height);
    ofRect(50, 150, width, height);
    ofRect(50, 200, width, height);
    ofRect(50, 250, width, height);

    // 'O' Tetromino
    ofRect(150, 200, width, height);
    ofRect(150, 250, width, height);
    ofRect(200, 200, width, height);
    ofRect(200, 250, width, height);

    // 'T' Tetromino
    ofRect(300, 250, width, height);
    ofRect(350, 200, width, height);
    ofRect(350, 250, width, height);
    ofRect(400, 250, width, height);

    // 'J' Tetromino
    ofRect(550, 150, width, height);
    ofRect(550, 200, width, height);
    ofRect(550, 250, width, height);
    ofRect(500, 250, width, height);

    // 'L' Tetromino
    ofRect(650, 150, width, height);
    ofRect(650, 200, width, height);
    ofRect(650, 250, width, height);
    ofRect(700, 250, width, height);

    // 'S' Tetromino
    ofRect(800, 250, width, height);
    ofRect(850, 250, width, height);
    ofRect(850, 200, width, height);
    ofRect(900, 200, width, height);

    // 'Z' Tetromino
    ofRect(1000, 200, width, height);
    ofRect(1050, 200, width, height);
    ofRect(1050, 250, width, height);
    ofRect(1100, 250, width, height);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}