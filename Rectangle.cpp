#include "Rectangle.hpp"
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

Rectangle::Rectangle()
{
x = 0;
y = 0;
width = 100;
height = 100;
}

Rectangle::Rectangle(int x_in, int y_in, int width_in, int height_in)
{
x = x_in;
y = y_in;
width = width_in;
height = height_in;

}

void Rectangle::print(string label)
{
cout << "\n\nRectangle Object: " << label;
cout << "\n                 x: " << x;
cout << "\n                 y: " << y;
cout << "\n             width: " << width;
cout << "\n            height: " << height;
}
void Rectangle::set(int x_in, int y_in, int width_in, int height_in)
{
x = x_in;
y = y_in;
width = width_in;
height = height_in;
}
bool Rectangle::intersects(Rectangle other)
{
bool result = false;
if ((x <= other.x) && (x + width >= other.x))
{
if ((y <= other.y) && (y + height >= other.y))
{
result = true;
}
}
return (result);
}
