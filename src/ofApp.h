#pragma once
#include "StormTrooper.h"
#include "ofMain.h"
#include "DarthVader.h"
#include "DarthMaul.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
	
	ofSoundPlayer soundTrack;  //background music
	ofSoundPlayer sound; //light saber sound
	StormTrooper storm; // create 20 storm troopers;
	DarthVader darthV;
	DarthMaul darthM;

	
};
