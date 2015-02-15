//
//  DarthVader.cpp
//  emptyExample
//
//  Created by Leytzher on 2/15/15.
//
//

#include "DarthVader.h"
#include "ofMain.h"

DarthVader::DarthVader(){
	darthVaderImage.loadImage("darthVader.png");
}


void DarthVader::setup(){
	/* setup Darth Vader at the top of the screen
	 */
	
	int rand = ofRandom(0,ofGetWidth()-1);
	pos = ofPoint(rand,0);
	
	float speed = ofRandom(1, 5); //get random speed
	vel = ofPoint(0,speed);
	
	time = 0;
}

void DarthVader::update(){
	pos += vel;
}

void DarthVader::draw(){
	darthVaderImage.draw(pos, 80,80);
}
