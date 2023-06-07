#include "Stroke.hpp"
#include <iostream>

using namespace std;

Stroke::Stroke()
{
red = 0;
green = 0;
blue = 0;
opacity = 255;
width = 1;
}

Stroke::Stroke(int red_in, int green_in, int blue_in, int opacity_in, int width_in)
{
red = red_in;
green = green_in;
blue = blue_in;
opacity = opacity_in;
width = width_in;
}

void Stroke::print(string label)
{
cout << "\n\nFill Object:  " << label;
cout << "\n          red: " << red;
cout << "\n        green: " << green;
cout << "\n         blue: " << blue;
cout << "\n      opacity: " << opacity;
cout << "\n        width: " << width;
}
void Stroke::set(int red_in, int green_in, int blue_in, int opacity_in, int width_in)
{
red = red_in;
green = green_in;
blue = blue_in;
opacity = opacity_in;
width = width_in;
}

void Stroke::darker(int delta)
{
red = red - delta;
if (red < 0) red = 0;

green = green - delta;
if (green < 0) green = 0;

blue = blue - delta;
if (blue < 0) blue = 0;
}

void Stroke::lighter(int delta)
{
red = red + delta;
if (red < 0) red = 0;

green = green + delta;
if (green < 0) green = 0;

blue = blue + delta;
if (blue < 0) blue = 0;
}
