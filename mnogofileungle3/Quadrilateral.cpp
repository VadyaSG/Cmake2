#include<iostream>
#include<string>
#include"Figure.h"
#include"Quadrilateral.h"
#include "exception.h"

Quadrilateral::Quadrilateral(int a, int b, int c, int d, int aSide, int bSide, int cSide, int dSide)
{

	this->sidesCount = true; this->name = name; this->a = a; this->b = b; this->c = c; this->d = d;
	this->aSide = aSide; this->bSide = bSide; this->cSide = cSide; this->dSide = dSide;
	name = "Quadrilateral";
	if ((a + b + c + d) != 360)
	{
		throw  Exception("The sum of the ungles should be 360");
	}
}