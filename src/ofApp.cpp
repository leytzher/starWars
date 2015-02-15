#include "ofApp.h"
#include "StormTrooper.h"
#include "DarthVader.h"
#include "DarthMaul.h"

ofImage image;
ofImage space;
ofImage pigStorm;

//--------------------------------------------------------------
void ofApp::setup(){
	
	//Load image file
	space.loadImage("space.png");
	
	sound.loadSound("SlowSabr.wav");
	sound.setMultiPlay(true);
	
	storm = StormTrooper();
	storm.setup();
	
	darthV = DarthVader();
	darthV.setup();
	
	darthM = DarthMaul();
	darthM.setup();
	
}

//--------------------------------------------------------------
void ofApp::update(){
	storm.update();
	darthV.update();
	darthM.update();

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(0, 0, 0);
	space.draw(0, 0, ofGetWidth(),ofGetHeight());
	


	storm.draw();
	if (storm.pos.length() > ofGetHeight()){
		storm.vel = -storm.vel;
		storm.update();
		storm.draw();
	}
	
	darthV.draw();
	if (darthV.pos.length() > ofGetHeight()){
		darthV.setup();
		darthV.update();
		darthV.draw();
	}
	
	darthM.draw();
	if (darthM.pos.length() > ofGetHeight()){
		darthM.setup();
		darthM.update();
		darthM.draw();
	}

}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
	
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
	sound.play();
	sound.setVolume(0.2);
	ofSoundUpdate();
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}