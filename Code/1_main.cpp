// Project started on Monday, November 27 2023
// Make a game where a ball bounces off a wall and you control the ball by changing the angle of a wall

#include <iostream>
#include "0_header.h"


unsigned int wallAngle = 180;
unsigned int ballAngle = 90;
unsigned int OldBallAngle = 0;
unsigned int pointXY[2];
unsigned int newPointXY[2];
//Window height and width
unsigned int windowWidth;
unsigned int windowHeight;
//Tile
std::string tileContent;


//Main is in charge of calling and integrating all of these functions
int main() {

  windowSizeUpdate();
  drawMap();

  
}