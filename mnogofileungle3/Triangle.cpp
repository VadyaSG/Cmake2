#include<iostream>
#include<string>
#include"Figure.h"
#include"Triangle.h"
#include "exception.h"

Triangle::Triangle(int a, int b, int c, int aSide, int bSide, int cSide)
{
	this->name = name; this->a = a; this->b = b; this->c = c;
	this->aSide = aSide; this->bSide = bSide; this->cSide = cSide;
	name = "Triangle";
	if ((a + b + c) != 180)
	{
		throw Exception("The sum of the angles should be 180 " );
	}
	
}