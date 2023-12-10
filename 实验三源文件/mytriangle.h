#pragma once
#include<iostream>
#include<math.h>
using namespace std;
bool is_valid(double side1, double side2, double side3)
{
	bool result(false);
	if (side1 + side2 > side3 && side2 + side3 > side1 && side2 + side3 > side1)
	{
		result = true;
	}
	return result;
}
double _area(double side1, double side2, double side3) {
	double s((side1 + side2 + side3) / 2);
	double result=sqrt(s * (s - side2) * (s - side1) * (s - side3));
	return result;
}
