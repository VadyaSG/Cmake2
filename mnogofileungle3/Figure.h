#pragma once

class Figure
{
protected:

	std::string name{};
	int a{};
	int b{};
	int c{};
	int d{};
	int aSide{};
	int bSide{};
	int cSide{};
	int dSide{};
	bool sidesCount{ false };
	Figure(std::string name, int a, int b, int c, int d, int aSide, int bSide, int cSide, int dSide) {};
	Figure(std::string name, int a, int b, int c, int aSide, int bSide, int cSide) {};

public:

	Figure() :Figure("Figure", 0, 0, 0, 0, 0, 0) {};
	int getAngleA() const;
	int getAngleB() const;
	int getAngleC() const;
	int getAngleD() const;
	int getSideA()  const;
	int getSideB()  const;
	int getSideC()  const;
	int getSideD()  const;
	std::string getName()  const;
	bool getSidesCount() const;
};