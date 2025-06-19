#include<iostream>
#include<string>
#include <stdexcept>
#include"Figure.h"
#include"Triangle.h"
#include"EquilateralTriangle.h"
#include"RightangledTriangle.h"
#include"IsoscelesTriangle.h"
#include"Quadrilateral.h"
#include"Rectangle.h"
#include"Square.h"
#include"Parallelogram.h"
#include"Rhomb.h"
#include <cstdlib>

void print(Figure& fFigure);

int main()
{
	try 
	{
		Triangle triangle(50, 60, 70, 10, 20, 30);
		print(triangle);
		std::cout << " Is created " << "\n" << std::endl;
	}
	catch (const std::exception& triangle)
	{
		std::cout << "Triangle was not created. " << "\n" << "Error: ";
		std::cout << triangle.what() << "\n" << std::endl;
	}

	 try 
	{
		EquilateralTriangle equilateralTriangle(60, 60, 60, 30, 30, 30);
		print(equilateralTriangle);
		std::cout << " Is created" << "\n" << std::endl;
	}
	catch (const std::exception& equilateralTriangle)
	{
		std::cout<<"Equilateral triangle was not created. " << "\n" << "Error: "; 
		std::cout << equilateralTriangle.what() << "\n" << std::endl;
	}

	try 
	{
		RightangledTriangle rightangledTriangle(30, 60, 90, 10, 20, 30);
		print(rightangledTriangle);
		std::cout << " Is created" << "\n" << std::endl;
	}
	catch(const std::exception& rightTriangle)
	{
		std::cout << "Rightangled triangle was not created. " << "\n" << "Error: ";
		std::cout << rightTriangle.what() << "\n" << std::endl;
	}

	try
	{
		IsosscelessTriangle isoscelesTriangle(50, 80, 50, 10, 20, 10);
		print(isoscelesTriangle);
		std::cout << " Is created" << "\n" << std::endl;
	}
	catch(std::exception& isossTriangle)
	{
		std::cout << "Isossceless Triangle  was not created. " << "\n" << "Error: ";
		std::cout << isossTriangle.what() << "\n" << std::endl;
	}

	try
	{
		Quadrilateral quadrilateral(90, 90, 90, 90, 60, 60, 60, 60);
		print(quadrilateral);
		std::cout << " Is created" << "\n" << std::endl;
	}
	catch (std::exception& quadrailaterial)
	{
		std::cout << "Quadrilateral  was not created. " << "\n" << "Error: ";
		std::cout << quadrailaterial.what() << "\n" << std::endl;
	}
	
	try
	{
		Rectangle rectangle(90, 90, 90, 90, 70, 60, 60, 60);
		print(rectangle);
		std::cout << " Is created" << "\n" << std::endl;
	}
	catch(std::exception& rectangle)
	{
		std::cout << "Rectangle  was not created. " << "\n" << "Error: ";
		std::cout << rectangle.what() << "\n" << std::endl;
	}
	
	try
	{
		Square square(90, 90, 90, 90, 20, 20, 20, 20);
		print(square);
		std::cout << " Is created" << "\n" << std::endl;
	}
	catch (std::exception& square)
	{
		std::cout << "Square  was not created. " << "\n" << "Error: ";
		std::cout << square.what() << "\n" << std::endl;
	}

	try
	{
		Parallelogram parallelogram(30, 40, 30, 40, 20, 30, 20, 30);
		print(parallelogram);
		std::cout << " Is created" << "\n" << std::endl;
	}
	catch (std::exception& parallelogram)
	{
		std::cout << "Parallelogram  was not created. " << "\n" << "Error: ";
		std::cout << parallelogram.what() << "\n" << std::endl;
	}
	
	try
	{
		Rhomb rhomb(30, 40, 30, 40, 30, 30, 30, 30);
		print(rhomb);
		std::cout << " Is created" << "\n" << std::endl;
	}
	catch (std::exception& rhomb)
	{
		std::cout << "Rhomb  was not created. " << "\n" << "Error: ";
		std::cout << rhomb.what() << "\n" << std::endl;
	}
	system("pause");
}
void print(Figure& fFigure)
{
	if (!fFigure.getSidesCount())
	{
		std::cout << fFigure.getName() << "(" << "Sides " << fFigure.getSideA() << ", " << fFigure.getSideB() << ", " << fFigure.getSideC() << "; ";
		std::cout << "Angles " << fFigure.getAngleA() << ", " << fFigure.getAngleB() << ", " << fFigure.getAngleC() << ")";
	}
	else
	{
		std::cout << fFigure.getName() << "( " << "Sides " << fFigure.getSideA() << ", " << fFigure.getSideB() << ", " << fFigure.getSideC() << ", " << fFigure.getSideD()
		 << " Angles " << fFigure.getAngleA() << ", " << fFigure.getAngleB() << ", " << fFigure.getAngleC() << ", " << fFigure.getAngleD() << ")";
	};
}