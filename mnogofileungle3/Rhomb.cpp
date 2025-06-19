#include<iostream>
#include<string>
#include"Figure.h"
#include"Quadrilateral.h"
#include"Rhomb.h"
#include "exception.h"

Rhomb::Rhomb(int a, int b, int c, int d, int aSide, int bSide, int cSide, int dSide):Quadrilateral(a, b, c, d, aSide, bSide, cSide, dSide) 
{ 
	name = "Rhomb"; 
	if (aSide != bSide != cSide != dSide)
	{
		throw Exception("All sides should be equal");
	}
	if ((a != c) && (b != d))
	{
		throw Exception("aUngle and cUngle/ bUngle and dUngle should be equal");
	}
};