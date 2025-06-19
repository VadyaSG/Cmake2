#include<iostream>
#include<string>
#include"Figure.h"
#include"Triangle.h"
#include"EquilateralTriangle.h"
#include "exception.h"

EquilateralTriangle::EquilateralTriangle(int a, int b, int c, int aSide, int bSide, int cSide) :Triangle(a, b, c, aSide, bSide, cSide) 
{ 
	name = "EquilateralTriangle"; 
	if ((aSide!=bSide && bSide!=cSide)) 
	{
		throw Exception("Sides should be equal");
	}
	if (a, b, c != 60)
	{
		throw Exception("Ungles should be 60");
	}
};