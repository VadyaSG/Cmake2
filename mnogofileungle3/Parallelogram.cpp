#include<iostream>
#include<string>
#include"Figure.h"
#include"Quadrilateral.h"
#include"Parallelogram.h"
#include "exception.h"

Parallelogram::Parallelogram(int a, int b, int c, int d, int aSide, int bSide, int cSide, int dSide):Quadrilateral(a, b, c, d, aSide, bSide, cSide, dSide)
{
	name = "Parallelogram"; 
	if ((aSide != cSide) && (bSide != dSide))
	{
		throw Exception("aSide and cSide/ bSide and dSide should be equal");
	}
	if((a!=c)&&(b!=d))
	{
		throw Exception("aUngle and cUngle/ bUngle and dUngle should be equal");
	}
};