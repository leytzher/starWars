//
//  DarthMaul.cpp
//  emptyExample
//
//  Created by Leytzher on 2/15/15.
//
//

#include "DarthMaul.h"
#include "ofMain.h"

DarthMaul::DarthMaul(){
	darthMaulImage.loadImage("darthMaul.png");
}


void DarthMaul::setup(){
	/* setup Darth Vader at the top of the screen
	 */
	
	int rand = ofRandom(0,ofGetWidth()-1);
	pos = ofPoint(rand,0);
	
	float speed = ofRandom(1, 5); //get random speed
	vel = ofPoint(0,speed);
	
	time = 0;
}

void DarthMaul::update(){
	pos += vel;
}

void DarthMaul::draw(){
	darthMaulImage.draw(pos, 60,60);
}
