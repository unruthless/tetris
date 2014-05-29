#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    // Set frame rate to 60fps
    ofSetFrameRate(60);
    
    tetrominoes.push_back(new Tetromino());
}

//--------------------------------------------------------------
void ofApp::update(){
    
    for (int i = 0; i < tetrominoes.size(); i++) {
        if (tetrominoes[i]->isOffscreen) {

            delete tetrominoes[i];
            tetrominoes.erase(tetrominoes.begin() + i, tetrominoes.begin() + i + 1);
            
        } else {
            tetrominoes[i]->update();
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    for (int i = 0; i < tetrominoes.size(); i++) {
        tetrominoes[i]->draw();
    }
    
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