#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    // Set frame rate to 60fps
    ofSetFrameRate(60);
    
    Tetromino fullSetOfTetrominoes = Tetromino();
}

//--------------------------------------------------------------
void ofApp::update(){
    
    // -- Make 'em fall --

    fullSetOfTetrominoes.update();
}

//--------------------------------------------------------------
void ofApp::draw(){

    fullSetOfTetrominoes.draw();

    ofDrawBitmapString(ofToString(ofGetFrameRate())+"fps", 10, 15);
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