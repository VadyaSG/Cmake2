#include<iostream>
#include<string>
#include"Figure.h"
#include"Triangle.h"
#include"IsoscelesTriangle.h"
#include "exception.h"

IsosscelessTriangle::IsosscelessTriangle(int a, int b, int c, int aSide, int bSide, int cSide) :Triangle(a, b, c, aSide, bSide, cSide) 
{
	name = "IsosscelessTriangle"; 
	if (aSide != cSide)
	{
		throw Exception("aSide and bSide should be equal");
	}
	if (a != c)
	{
		throw Exception("Ungle A and ungle B should be equal");
	}
};
