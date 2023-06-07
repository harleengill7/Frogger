#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <stdio.h>

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Rectangle
{
public:
    //Memeber Vars
    int x;
    int y;
    int height;
    int width;
    
    //Methods
    Rectangle();
    Rectangle(int x_in, int y_in, int height_in, int width_in);
    
    void print(string label);
    void set(int x_in, int y_in, int width_in, int height_in);

    bool intersects(Rectangle other);
};

#endif /* Rectangle_hpp */
