#ifndef Fill_hpp
#define Fill_hpp

#include <stdio.h>
#include <stdio.h>
#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Fill
{
public:

//Member Vars
int red;
int blue;
int green;
int opacity;   //0 = invisible, 255= completely covers the background

//Methods
Fill();
Fill(int red_in, int green_in, int blue_in, int opacity_in);

void print(string label);
void set(int red_in, int green_in, int blue_in, int opacity_in);

void darker(int delta);
void lighter(int delta);

};


#endif /* Fill_hpp */
