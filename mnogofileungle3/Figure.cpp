#include<iostream>
#include<string>
#include"Figure.h"

int Figure::getAngleA()     const { return a; };
int Figure::getAngleB()     const { return b; };
int Figure::getAngleC()     const{ return c; };
int Figure::getAngleD()     const{ return d; };
int Figure::getSideA()      const { return aSide; };
int Figure::getSideB()      const { return bSide; };
int Figure::getSideC()      const { return cSide; };
int Figure::getSideD()      const { return dSide; };
std::string Figure::getName()       const{ return name; };
bool Figure::getSidesCount() const{ return sidesCount; };
