//
//  Emperor.cpp
//  emptyExample
//
//  Created by Leytzher on 2/15/15.
//
//

#include "Emperor.h"
#include "ofMain.h"

Emperor::Emperor(){
	emperorImage.loadImage("emperor.png");
}


void Emperor::setup(){
	/* setup Darth Vader at the top of the screen
	 */
	
	int rand = ofRandom(0,ofGetWidth()-1);
	pos = ofPoint(rand,0);
	
	float speed = ofRandom(1, 5); //get random speed
	vel = ofPoint(0,speed);
	
	time = 0;
}

void Emperor::update(){
	pos += vel;
}

void Emperor::draw(){
	emperorImage.draw(pos,145,80);
	
}