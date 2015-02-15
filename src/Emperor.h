//
//  Emperor.h
//  emptyExample
//
//  Created by Leytzher on 2/15/15.
//
//

#ifndef __emptyExample__Emperor__
#define __emptyExample__Emperor__

#include <stdio.h>
#include "ofMain.h"

class Emperor{
public:
	Emperor();
	void setup();
	void update();
	void draw();
	
	ofPoint pos;
	ofPoint vel;
	float time;
	
	ofImage emperorImage;
	
};
#endif /* defined(__emptyExample__Emperor__) */
