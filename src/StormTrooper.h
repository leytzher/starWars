//
//  StormTrooper.h
//  emptyExample
//
//  Created by Leytzher on 2/15/15.
//
//

#ifndef __emptyExample__StormTrooper__
#define __emptyExample__StormTrooper__

#include <stdio.h>
#include "ofMain.h"

class StormTrooper{
public:
	StormTrooper();
	void setup();
	void update();
	void draw();
	
	ofPoint pos;
	ofPoint vel;
	float time;
	
	ofImage stormTrooperImage;
	
	
	
	
};

#endif /* defined(__emptyExample__StormTrooper__) */
