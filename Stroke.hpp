#ifndef Stroke_hpp
#define Stroke_hpp

#include <stdio.h>

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>


using namespace std;

class Stroke
{
public:

//member vars
int red;
int blue;
int green;
int opacity;   //0 = invisible, 255= completely covers the background
int width;

//member functions
Stroke();
Stroke(int red_in, int green_in, int blue_in, int opacity_in, int width_in);

void print(string label);
void set(int red_in, int green_in, int blue_in, int opacity_in, int width_in);

void darker(int delta);
void lighter(int delta);

};
#endif /* Stroke_hpp */
