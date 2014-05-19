#include "ofApp.h"

float TILE_WIDTH;
float TILE_HEIGHT;

int x;
int y;

// 'I' Tetromino
int TETROMINO_I_1_x;
int TETROMINO_I_1_y;
int TETROMINO_I_2_x;
int TETROMINO_I_2_y;
int TETROMINO_I_3_x;
int TETROMINO_I_3_y;
int TETROMINO_I_4_x;
int TETROMINO_I_4_y;

// 'O' Tetromino
int TETROMINO_O_1_x;
int TETROMINO_O_1_y;
int TETROMINO_O_2_x;
int TETROMINO_O_2_y;
int TETROMINO_O_3_x;
int TETROMINO_O_3_y;
int TETROMINO_O_4_x;
int TETROMINO_O_4_y;

// 'T' Tetromino
int TETROMINO_T_1_x;
int TETROMINO_T_1_y;
int TETROMINO_T_2_x;
int TETROMINO_T_2_y;
int TETROMINO_T_3_x;
int TETROMINO_T_3_y;
int TETROMINO_T_4_x;
int TETROMINO_T_4_y;

// 'J' Tetromino
int TETROMINO_J_1_x;
int TETROMINO_J_1_y;
int TETROMINO_J_2_x;
int TETROMINO_J_2_y;
int TETROMINO_J_3_x;
int TETROMINO_J_3_y;
int TETROMINO_J_4_x;
int TETROMINO_J_4_y;

// 'L' Tetromino
int TETROMINO_L_1_x;
int TETROMINO_L_1_y;
int TETROMINO_L_2_x;
int TETROMINO_L_2_y;
int TETROMINO_L_3_x;
int TETROMINO_L_3_y;
int TETROMINO_L_4_x;
int TETROMINO_L_4_y;

// 'S' Tetromino
int TETROMINO_S_1_x;
int TETROMINO_S_1_y;
int TETROMINO_S_2_x;
int TETROMINO_S_2_y;
int TETROMINO_S_3_x;
int TETROMINO_S_3_y;
int TETROMINO_S_4_x;
int TETROMINO_S_4_y;

// 'Z' Tetromino
int TETROMINO_Z_1_x;
int TETROMINO_Z_1_y;
int TETROMINO_Z_2_x;
int TETROMINO_Z_2_y;
int TETROMINO_Z_3_x;
int TETROMINO_Z_3_y;
int TETROMINO_Z_4_x;
int TETROMINO_Z_4_y;




//--------------------------------------------------------------
void ofApp::setup(){

    TILE_WIDTH = 49;
    TILE_HEIGHT = 49;
    
    // 'I' Tetromino
    TETROMINO_I_1_x = 50;
    TETROMINO_I_1_y = 0;
    TETROMINO_I_2_x = 50;
    TETROMINO_I_2_y = 50;
    TETROMINO_I_3_x = 50;
    TETROMINO_I_3_y = 100;
    TETROMINO_I_4_x = 50;
    TETROMINO_I_4_y = 150;

    // 'O' Tetromino
    TETROMINO_O_1_x = 150;
    TETROMINO_O_1_y = 0;
    TETROMINO_O_2_x = 150;
    TETROMINO_O_2_y = 50;
    TETROMINO_O_3_x = 200;
    TETROMINO_O_3_y = 0;
    TETROMINO_O_4_x = 200;
    TETROMINO_O_4_y = 50;

    // 'T' Tetromino
    TETROMINO_T_1_x = 300;
    TETROMINO_T_1_y = 50;
    TETROMINO_T_2_x = 350;
    TETROMINO_T_2_y = 0;
    TETROMINO_T_3_x = 350;
    TETROMINO_T_3_y = 50;
    TETROMINO_T_4_x = 400;
    TETROMINO_T_4_y = 50;

    // 'J' Tetromino
    TETROMINO_J_1_x = 550;
    TETROMINO_J_1_y = 0;
    TETROMINO_J_2_x = 550;
    TETROMINO_J_2_y = 50;
    TETROMINO_J_3_x = 550;
    TETROMINO_J_3_y = 100;
    TETROMINO_J_4_x = 500;
    TETROMINO_J_4_y = 100;

    // 'L' Tetromino
    TETROMINO_L_1_x = 650;
    TETROMINO_L_1_y = 0;
    TETROMINO_L_2_x = 650;
    TETROMINO_L_2_y = 50;
    TETROMINO_L_3_x = 650;
    TETROMINO_L_3_y = 100;
    TETROMINO_L_4_x = 700;
    TETROMINO_L_4_y = 100;

    // 'S' Tetromino
    TETROMINO_S_1_x = 800;
    TETROMINO_S_1_y = 50;
    TETROMINO_S_2_x = 850;
    TETROMINO_S_2_y = 50;
    TETROMINO_S_3_x = 850;
    TETROMINO_S_3_y = 0;
    TETROMINO_S_4_x = 900;
    TETROMINO_S_4_y = 0;

    // 'Z' Tetromino
    TETROMINO_Z_1_x = 1000;
    TETROMINO_Z_1_y = 0;
    TETROMINO_Z_2_x = 1050;
    TETROMINO_Z_2_y = 0;
    TETROMINO_Z_3_x = 1050;
    TETROMINO_Z_3_y = 50;
    TETROMINO_Z_4_x = 1100;
    TETROMINO_Z_4_y = 50;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(0, 0, 0);
    
    // 'I' Tetromino
    ofRect(TETROMINO_I_1_x, TETROMINO_I_1_y, TILE_WIDTH, TILE_HEIGHT);
    ofRect(TETROMINO_I_2_x, TETROMINO_I_2_y, TILE_WIDTH, TILE_HEIGHT);
    ofRect(TETROMINO_I_3_x, TETROMINO_I_3_y, TILE_WIDTH, TILE_HEIGHT);
    ofRect(TETROMINO_I_4_x, TETROMINO_I_4_y, TILE_WIDTH, TILE_HEIGHT);

    // 'O' Tetromino
    ofRect(TETROMINO_O_1_x, TETROMINO_O_1_y, TILE_WIDTH, TILE_HEIGHT);
    ofRect(TETROMINO_O_2_x, TETROMINO_O_2_y, TILE_WIDTH, TILE_HEIGHT);
    ofRect(TETROMINO_O_3_x, TETROMINO_O_3_y, TILE_WIDTH, TILE_HEIGHT);
    ofRect(TETROMINO_O_4_x, TETROMINO_O_4_y, TILE_WIDTH, TILE_HEIGHT);

    // 'T' Tetromino
    ofRect(TETROMINO_T_1_x, TETROMINO_T_1_y, TILE_WIDTH, TILE_HEIGHT);
    ofRect(TETROMINO_T_2_x, TETROMINO_T_2_y, TILE_WIDTH, TILE_HEIGHT);
    ofRect(TETROMINO_T_3_x, TETROMINO_T_3_y, TILE_WIDTH, TILE_HEIGHT);
    ofRect(TETROMINO_T_4_x, TETROMINO_T_4_y, TILE_WIDTH, TILE_HEIGHT);

    // 'J' Tetromino
    ofRect(TETROMINO_J_1_x, TETROMINO_J_1_y, TILE_WIDTH, TILE_HEIGHT);
    ofRect(TETROMINO_J_2_x, TETROMINO_J_2_y, TILE_WIDTH, TILE_HEIGHT);
    ofRect(TETROMINO_J_3_x, TETROMINO_J_3_y, TILE_WIDTH, TILE_HEIGHT);
    ofRect(TETROMINO_J_4_x, TETROMINO_J_4_y, TILE_WIDTH, TILE_HEIGHT);

    // 'L' Tetromino
    ofRect(TETROMINO_L_1_x, TETROMINO_L_1_y, TILE_WIDTH, TILE_HEIGHT);
    ofRect(TETROMINO_L_2_x, TETROMINO_L_2_y, TILE_WIDTH, TILE_HEIGHT);
    ofRect(TETROMINO_L_3_x, TETROMINO_L_3_y, TILE_WIDTH, TILE_HEIGHT);
    ofRect(TETROMINO_L_4_x, TETROMINO_L_4_y, TILE_WIDTH, TILE_HEIGHT);

    // 'S' Tetromino
    ofRect(TETROMINO_S_1_x, TETROMINO_S_1_y, TILE_WIDTH, TILE_HEIGHT);
    ofRect(TETROMINO_S_2_x, TETROMINO_S_2_y, TILE_WIDTH, TILE_HEIGHT);
    ofRect(TETROMINO_S_3_x, TETROMINO_S_3_y, TILE_WIDTH, TILE_HEIGHT);
    ofRect(TETROMINO_S_4_x, TETROMINO_S_4_y, TILE_WIDTH, TILE_HEIGHT);

    // 'Z' Tetromino
    ofRect(TETROMINO_Z_1_x, TETROMINO_Z_1_y, TILE_WIDTH, TILE_HEIGHT);
    ofRect(TETROMINO_Z_2_x, TETROMINO_Z_2_y, TILE_WIDTH, TILE_HEIGHT);
    ofRect(TETROMINO_Z_3_x, TETROMINO_Z_3_y, TILE_WIDTH, TILE_HEIGHT);
    ofRect(TETROMINO_Z_4_x, TETROMINO_Z_4_y, TILE_WIDTH, TILE_HEIGHT);
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