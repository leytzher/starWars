//
//  DarthVader.h
//  emptyExample
//
//  Created by Leytzher on 2/15/15.
//
//

#ifndef __emptyExample__DarthVader__
#define __emptyExample__DarthVader__

#include <stdio.h>
#include "ofMain.h"

class DarthVader{
public:
	DarthVader();
	void setup();
	void update();
	void draw();
	
	ofPoint pos;
	ofPoint vel;
	float time;
	
	ofImage darthVaderImage;
	
};

#endif /* defined(__emptyExample__DarthVader__) */
