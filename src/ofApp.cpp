#include "ofApp.h"
#include "StormTrooper.h"
#include "DarthVader.h"
#include "DarthMaul.h"
#include "Emperor.h"

ofImage image;
ofImage space;
ofImage trainingLogo;

//--------------------------------------------------------------
void ofApp::setup(){
	
	
	//Load image file
	space.loadImage("space.png");
	trainingLogo.loadImage("TrainingCenter.png");
	
	soundTrack.loadSound("Training-Mixed.wav");
	soundTrack.setLoop(true);
	soundTrack.play();

	
	sound.loadSound("SlowSabr.wav");
	sound.setMultiPlay(true);
	
	storm = StormTrooper();
	storm.setup();
	
	darthV = DarthVader();
	darthV.setup();
	
	darthM = DarthMaul();
	darthM.setup();
	
	emperor = Emperor();
	emperor.setup();
	
}

//--------------------------------------------------------------
void ofApp::update(){
	
	
	storm.update();
	darthV.update();
	darthM.update();
	emperor.update();

}

//--------------------------------------------------------------
void ofApp::draw(){
	
	ofBackground(0, 0, 0);
	space.draw(0, 0, ofGetWidth(),ofGetHeight());
	trainingLogo.draw(0,0,trainingLogo.width*0.5,trainingLogo.height*0.5);
	ofDrawBitmapString("Joaquin's 5th Birthday", 100, 200);



	storm.draw();
	if (storm.pos.length() > ofGetHeight() + 100 || storm.pos.length() < ofGetHeight() -100){
		storm.vel = -1*storm.vel;
		storm.setup();
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
	
	emperor.draw();
	if (emperor.pos.length() > ofGetHeight()){
		emperor.setup();
		emperor.update();
		emperor.draw();
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