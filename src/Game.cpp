//
//  Game.cpp
//  tetris
//
//  Created by Ruthie BenDor on 6/30/14.
//
//

#include "Game.h"


Game::Game(){
    Grid myGrid = new Grid();
    myGrid.setGameOverCallback(BIND_MEM_CB(&Parent:: onGameOver, this));
}

Game::~Game(){
    
}

Game::onGameOver(){
    
}