#include "Fill.hpp"
#include <iostream>
using namespace std;

Fill::Fill()
{
red = 0;
green = 0;
blue = 0;
opacity = 255;
}

Fill::Fill(int red_in, int green_in, int blue_in, int opacity_in)
{
red = red_in;
green = green_in;
blue = blue_in;
opacity = opacity_in;
}

void Fill::print(string label)
{
cout << "\n\nFill Object:  " << label;
cout << "\n          red: " << red;
cout << "\n        green: " << green;
cout << "\n         blue: " << blue;
cout << "\n      opacity: " << opacity;
}

void Fill::set(int red_in, int green_in, int blue_in, int opacity_in)
{
red = red_in;
green = green_in;
blue = blue_in;
opacity = opacity_in;
}
void Fill::darker(int delta)
{
red = red - delta;
if (red < 0) red = 0;

green = green - delta;
if (green < 0) green = 0;

blue = blue - delta;
if (blue < 0) blue = 0;
}

void Fill::lighter(int delta)
{
red = red + delta;
if (red < 0) red = 0;

green = green + delta;
if (green < 0) green = 0;

blue = blue + delta;
if (blue < 0) blue = 0;
}
