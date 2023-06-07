//ofApp.h-------------------------------------------
#pragma once

#include "ofMain.h"
#include "Rectangle.hpp"
#include "Fill.hpp"
#include "Stroke.hpp"
#include <iostream>
#include <string>

class ofApp : public ofBaseApp{

	public:
    
    int xPos[12];
    int yPos[12];
    int fxPos;
    int fyPos;
    
    
    int xPos0;
    int xPos1;
    int xPos2;
    int xPos3;
    int xPos4;
    int xPos5;
    int xPos6;
    int xPos7;
    int xPos8;
    int xPos9;
    int xPos10;
    int xPos11;
    
    int yPos0;
    int yPos1;
    int yPos2;
    int yPos3;
    int yPos4;
    int yPos5;
    int yPos6;
    int yPos7;
    int yPos8;
    int yPos9;
    int yPos10;
    int yPos11;
    
    Rectangle myRectangle[100];
    Fill myFill[100];
    Stroke myStroke[100];
    Rectangle frog;
    Fill myFill1;
    Stroke myStroke1;
    
    string gamestate;
    
    
    
        void setup();
        void update();
        void draw();
    

        void drawRectangle(Rectangle rectangle, Fill fill, Stroke stroke);


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
    
    ofImage frogg;
    ofImage water;
    ofImage log;
		
};
