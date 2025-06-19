#include<iostream>
#include<string>
#include"Figure.h"
#include"Triangle.h"
#include"RightangledTriangle.h"
#include "exception.h"

RightangledTriangle::RightangledTriangle(int a, int b, int c, int aSide, int bSide, int cSide) :Triangle(a, b, c, aSide, bSide, cSide) 
{ 
	name = "Rightangled Triangle";
	if (c != 90)
	{
		throw Exception("C-ungle should be 90");
	}
};