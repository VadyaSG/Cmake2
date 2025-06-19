#include<iostream>
#include<string>
#include"Figure.h"
#include"Quadrilateral.h"
#include"Square.h"
#include "exception.h"

Square::Square(int a, int b, int c, int d, int aSide, int bSide, int cSide, int dSide) :Quadrilateral(a, b, c, d, aSide, bSide, cSide, dSide) 
{
	name = "Square"; 
	if (aSide != bSide != cSide != dSide)
	{
		throw Exception("All sides should be equal");
	}
	if (a, b, c, d != 90)
	{
		throw Exception("All ungles should be 90");
	}
};