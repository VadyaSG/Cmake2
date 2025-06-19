#include<iostream>
#include<string>
#include"Figure.h"
#include"Quadrilateral.h"
#include"Rectangle.h"
#include "exception.h"

Rectangle::Rectangle(int a, int b, int c, int d, int aSide, int bSide, int cSide, int dSide): Quadrilateral(a, b, c, d, aSide, bSide, cSide, dSide) 
{ 
	name = "Rectangle";
	if ((a != c) && (b != d))
	{
		throw Exception("aSide and cSide/ bSide and dSide should be equal");
	}
	if (a, b, c, d != 90)
	{
		throw Exception("Ungles should be 90");
	}
};