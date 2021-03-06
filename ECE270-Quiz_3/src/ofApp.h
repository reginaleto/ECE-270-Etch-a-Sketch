#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		int red; 
		int green; 
		int blue; 

		int x1; 
		int y1; 
		int x2; 
		int y2; 

		int chance;
		int strokeWidth;
		int change;
		int frameNum = ofGetFrameNum();

		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
