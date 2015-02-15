//
//  StormTrooper.cpp
//  emptyExample
//
//  Created by Leytzher on 2/15/15.
//
//

#include "ofMain.h"
#include "StormTrooper.h"

StormTrooper::StormTrooper(){
	stormTrooperImage.loadImage("pigStorm.png");
}


void StormTrooper::setup(){
/* setup stormTrooper at the top of the screen
*/
	
	int rand = ofRandom(0,ofGetWidth()-1);
	pos = ofPoint(rand,0);
	
	float speed = ofRandom(1, 5); //get random speed
	vel = ofPoint(0,speed);
	
	time = 0;
}

void StormTrooper::update(){
	pos += vel;
}

void StormTrooper::draw(){
	stormTrooperImage.draw(pos, 50,50);
}

