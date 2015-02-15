#include "ofApp.h"
#include "StormTrooper.h"

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
	
}

//--------------------------------------------------------------
void ofApp::update(){
	storm.update();

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(0, 0, 0);
	space.draw(0, 0, ofGetWidth(),ofGetHeight());
	


	storm.draw();

}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	storm.~StormTrooper();
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