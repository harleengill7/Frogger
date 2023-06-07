//ofApp.c-------------------------------------------
#include "ofApp.h"
void ofApp::drawRectangle(Rectangle myRectangle, Fill myFill, Stroke myStroke)
{
    //draw stroke
    ofNoFill();
    ofSetColor(myStroke.red, myStroke.green, myStroke.blue, myStroke.opacity); //pull r,g,b,opacity from stroke
    ofSetLineWidth(myStroke.width); //pull width from stroke
    ofDrawRectangle(myRectangle.x, myRectangle.y, myRectangle.height, myRectangle.width); //pull x,y,r from circle
    
    //draw fill
    ofFill();
    ofSetColor(myFill.red, myFill.green, myFill.blue, myFill.opacity); //pull r g b, opacity from fill
    ofDrawRectangle(myRectangle.x, myRectangle.y, myRectangle.height, myRectangle.width); //pull x y height width from rectangle
}

//--------------------------------------------------------------
void ofApp::setup()
{
    fxPos = 480; //frog initial positions
    fyPos = 700;
    
    for(int i=0;i<12;i++)
    {
      xPos[i] = 5;  // horizontal start position for logs and rectangles
    }
    
    
    for(int i=0;i<12;i++)  //y positions of log
    {
      yPos[0] = 100;
      yPos[1] = 100;
      yPos[2] = 130;
      yPos[3] = 230;
      yPos[4] = 270;
      yPos[5] = 320;
      yPos[6] = 400;
      yPos[7] = 460;
      yPos[8] = 530;
      yPos[9] = 530;
      yPos[10] = 600;
      yPos[11] = 600;
    }
    
    for(int i=0;i<12;i++) //draw rectangle under logs
    {
        myRectangle[i].set(xPos[i], yPos[i], 45, 190);
        myFill[i].set(255, 255, 255, 256);
        myStroke[i].set(0, 0, 0, 0, 3);
        
    }
    
    frog.set(fxPos, fyPos, 30, 30); //draw rectangle under frog
    myFill1.set(255, 255, 255, 256);
    myStroke1.set(0, 0, 0, 0, 3);
    
    water.load("background.png"); // water background
   
    frogg.load("frog.jpeg"); //frog
    
    log.load("log.jpg"); //logs
   

}

//--------------------------------------------------------------
void ofApp::update()
{

    //if (gamestate == "game")
   //{
    //rectangle velocity
    myRectangle[0].x += 3;
    if(myRectangle[0].x > ofGetWidth()) // if horizontal position is off the screen (width)
     {
         myRectangle[0].x = 400;        // reset horizontal position
     }
    myRectangle[1].x += 2;
    if(myRectangle[1].x > ofGetWidth())
     {
         myRectangle[1].x = 5;
     }
    myRectangle[2].x += 1;
    if(myRectangle[2].x > ofGetWidth())
     {
         myRectangle[2].x = 5;
     }
    myRectangle[3].x += 5;
    if(myRectangle[3].x > ofGetWidth())
     {
        myRectangle[3].x = 5;
     }
    myRectangle[4].x += 2;
    if(myRectangle[4].x > ofGetWidth())
     {
         myRectangle[4].x = 5;
     }
    myRectangle[5].x += 3;
    if(myRectangle[5].x > ofGetWidth())
     {
         myRectangle[5].x = 5;
     }
    myRectangle[6].x += 4;
    if(myRectangle[6].x > ofGetWidth())
     {
         myRectangle[6].x = 5;
     }
    myRectangle[7].x += 2;
    if(myRectangle[7].x > ofGetWidth())
     {
        myRectangle[7].x = 5;
     }
    myRectangle[8].x += 1;
    if(myRectangle[8].x > ofGetWidth())
     {
         myRectangle[8].x = 5;
     }
    myRectangle[9].x += 1;
    if(myRectangle[9].x > ofGetWidth())
     {
         myRectangle[9].x = 5;
     }
    myRectangle[10].x += 2;
    if(myRectangle[10].x > ofGetWidth())
     {
         myRectangle[10].x = 5;
     }
    myRectangle[11].x += 1;
    if(myRectangle[11].x > ofGetWidth())
     {
         myRectangle[11].x = 5;
     }
    
    //log velocity
    xPos0 += 3;  //pic of log moving
    if(xPos0 > ofGetWidth())  //if pic of log  goes off screen
    {
        xPos0 = 400;          //restart at start
    }
    xPos2 += 2;
        if(xPos2 > ofGetWidth())
        {
            xPos2 = 5;
        }
    xPos1 += 1.5;
        if(xPos1 > ofGetWidth())
        {
            xPos1 = 5;
        }
    xPos3 += 5;
        if(xPos3 > ofGetWidth())
        {
            xPos3 = 5;
        }
    xPos4 += 2;
        if(xPos4 > ofGetWidth())
        {
            xPos4 = 5;
        }
    xPos5 += 3;
        if(xPos5 > ofGetWidth())
        {
            xPos5 = 5;
        }
    xPos6 += 4;
        if(xPos6 > ofGetWidth())
        {
            xPos6 = 5;
        }
    xPos7 += 2;
        if(xPos7 > ofGetWidth())
        {
            xPos7 = 5;
        }
    xPos8 += 1;
        if(xPos8 > ofGetWidth())
        {
            xPos8 = 5;
        }
    xPos9 += 1;
        if(xPos9 > ofGetWidth())
        {
            xPos9 = 5;
        }
    xPos10 += 2;
        if(xPos10 > ofGetWidth())
        {
            xPos10 = 5;
        }
    xPos11 += 1;
        if(xPos11 > ofGetWidth())
        {
            xPos11 = 5;
        }
    //}
    
     
    for(int i=0;i<12;i++) //if frog intersects log, start at begginning
    {
     if (frog.intersects(myRectangle[i]))
     {
        frog.x = 480;
        frog.y = 700;
     }

    }
    
    
    

}

//--------------------------------------------------------------
void ofApp::draw()
{
    ofSetColor(255, 255, 255);
    water.draw(0, 0, 1024, 768); // drawbackground
    
    for(int i=0;i<12;i++)  //draw rectangles under log pic
    {
    drawRectangle(myRectangle[i], myFill[i], myStroke[i]);
    }
    
    //draw log pics over obstacle rectangles
    log.draw(xPos0, yPos[0], 200, 45);
    log.draw(xPos2, yPos[1], 200, 45);
    log.draw(xPos1, yPos[2], 200, 45);
    log.draw(xPos3, yPos[3], 200, 45);
    log.draw(xPos4, yPos[4], 200, 45);
    log.draw(xPos5, yPos[5], 200, 45);
    log.draw(xPos6, yPos[6], 200, 45);
    log.draw(xPos7, yPos[7], 200, 45);
    log.draw(xPos8, yPos[8], 200, 45);
    log.draw(xPos9, yPos[9], 200, 45);
    log.draw(xPos10, yPos[10], 200, 45);
    log.draw(xPos11, yPos[11], 200, 45);
    
   ofSetColor(ofColor::dimGray); //road
       ofDrawRectangle(0, 700, 1024, 100);
   
   ofSetColor(ofColor::yellow);  //line
       ofDrawRectangle(0, 730, 1024, 1);
    
    drawRectangle(frog, myFill1, myStroke1); //rectangle under log
    frogg.draw(frog.x, frog.y, 30, 30);    //frog pic over rectangle
  

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
    if(key == OF_KEY_RIGHT)
    {
        frog.x = frog.x + 30;
    }
    
    if(key == OF_KEY_LEFT)
    {
        frog.x = frog.x - 30;
    }
    
    if(key == OF_KEY_DOWN)
    {
        frog.y = frog.y + 30;
    }

    if(key == OF_KEY_UP)
    {
        frog.y = frog.y - 30;
    }

}
