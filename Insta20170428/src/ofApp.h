#pragma once

#include "ofMain.h"
#include "ofxBullet.h"
#include "Leap.h"

class ofApp : public ofBaseApp{

	public:

		~ofApp();

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
	
		ofxBulletWorldRigid world;
		ofxBulletBox ground;

		ofEasyCam cam;

		vector<ofxBulletBox*> boxes;
		vector<ofColor> box_colors;


		// Leap Motion
		Leap::Controller leap;
		bool grabed;

		void drawHand(Leap::Hand hand);
		void drawFinger(Leap::Finger finger);

};
