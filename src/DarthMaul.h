//
//  DarthMaul.h
//  emptyExample
//
//  Created by Leytzher on 2/15/15.
//
//

#ifndef __emptyExample__DarthMaul__
#define __emptyExample__DarthMaul__

#include <stdio.h>
#include "ofMain.h"

class DarthMaul{
public:
	DarthMaul();
	void setup();
	void update();
	void draw();
	
	ofPoint pos;
	ofPoint vel;
	float time;
	
	ofImage darthMaulImage;
	
};

#endif /* defined(__emptyExample__DarthMaul__) */
