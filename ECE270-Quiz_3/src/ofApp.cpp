#include "ofApp.h"

//Lucas Evans
//Julius Burtell
//Larico Andres
//Gina Leto
//Issa Hachem

//--------------------------------------------------------------
void ofApp::setup() {
	//Init Variables
	red = rand() % 256;
	green = rand() % 256;
	blue = rand() % 256;

	x1 = rand() % 1024;
	y1 = rand() % 768;

	x2 = x1 + 10;
	y2 = y1;


	strokeWidth = 3;
	change = 10;

	//Screen Setup
	ofSetBackgroundColor(255, 255, 255);
	ofSetBackgroundAuto(false);

	ofSetFrameRate(30);

}

//--------------------------------------------------------------
void ofApp::update() {

	chance = rand() % 4;

	x1 = x2;
	y1 = y2;

	//Deciding which direction new line goes
	if (chance == 0) {
		x2 += change;
	}
	else if (chance == 1) {
		x2 -= change;
	}
	else if (chance == 2) {
		y2 += change;
	}
	else if (chance == 3) {
		y2 -= change;
	}
	//Random Line Color
	int frameNum = ofGetFrameNum();

	if (frameNum % 100 == 0) {
		red = rand() % 256;
		green = rand() % 256;
		blue = rand() % 256;
	}

}

//--------------------------------------------------------------
void ofApp::draw() {
	ofSetLineWidth(strokeWidth);
	ofSetColor(red, green, blue);
	ofDrawLine(x1, y1, x2, y2);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	if (key == OF_KEY_DOWN) {
		if ((strokeWidth >= 1) && (strokeWidth <= 11)) strokeWidth -= 2;
	}

	else if (key == OF_KEY_UP) {
		if ((strokeWidth >= 1) && (strokeWidth <= 11)) strokeWidth += 2;
	}

	else if (key == OF_KEY_LEFT) {
		if ((change >= 10) && (change <= 50)) change -= 5;
	}
	else if (key == OF_KEY_RIGHT) {
		if ((change >= 10) && (change <= 50)) change += 5;
	}

	//Interesting Control (Clears Screen when you press backpace)
	else if (key == OF_KEY_BACKSPACE) {
		ofSetBackgroundAuto(true);
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

	//Goes back to keeping lines after the clear screen
	if (key == OF_KEY_BACKSPACE) ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
