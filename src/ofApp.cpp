#include "ofApp.h"

unsigned long long ofApp::frameNumber;

//--------------------------------------------------------------
void ofApp::setup(){
    
    // Set frame rate to 60fps
    ofSetFrameRate(60);

    frameNumber = 0;
    
    activeShape.push_back(new Shape());
    
    //board.push_back(new Row());
}

//--------------------------------------------------------------
void ofApp::update(){

    // Pause for one second
    if (ofGetElapsedTimeMillis() - frameNumber > SPEED) {

        frameNumber = ofGetElapsedTimeMillis();

        for (int i = 0; i < activeShape.size(); i++) {
            if (!activeShape[i]->isMovableDown()) {
                activeShape[i]->handleCollision();
                break;
                //delete activeShape[i];
                //activeShape.erase(activeShape.begin() + i, activeShape.begin() + i + 1);
            } else {
                activeShape[i]->moveDown();
            }
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    for (int i = 0; i < activeShape.size(); i++) {
        activeShape[i]->draw();
    }
    
    ofDrawBitmapString(ofToString(ofGetFrameRate())+"fps", 10, 15);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    switch (key) {
        case 356:
            // arrow left -> move left
            cout << "arrow left -> move active shape left" << endl;
            for (int i = 0; i < activeShape.size(); i++) {
                if (activeShape[i]->isMovableLeft()) {
                    activeShape[i]->moveLeft();
                }
            }
            break;
        case 358:
            // arrow right -> move right
            cout << "arrow right -> move active shape right" << endl;
            for (int i = 0; i < activeShape.size(); i++) {
                if (activeShape[i]->isMovableRight()) {
                    activeShape[i]->moveRight();
                }
            }
            break;
        case 359:
            // arrow down -> move down
            cout << "arrow down -> move active shape down" << endl;
            for (int i = 0; i < activeShape.size(); i++) {
                if (!activeShape[i]->isMovableDown()) {
                    activeShape[i]->handleCollision();
                    break;
                    //delete activeShape[i];
                    //activeShape.erase(activeShape.begin() + i, activeShape.begin() + i + 1);
                } else {
                    activeShape[i]->moveDown();
                }
            }
            break;
        case 357:
            // arrow up -> drop down
            cout << "arrow up -> drop active shape down" << endl;
            break;
        case 32:
            // space bar -> pause game
            cout << "space bar -> pause game(?)" << endl;
            break;
        case 97:
            // 'a' key -> rotate left
            cout << "'a' key -> rotate active shape 90 degrees counterclockwise" << endl;
            break;
        case 115:
            // 's' key -> rotate right
            cout << "'s' key -> rotate active shape 90 degrees clockwise" << endl;
            break;
        default:
            // do nothing
            break;
    }
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