/**********************
* Автор: Михалел А.А. *
* Дата: 17.09.2024    *
* Название: лаба 1    *
**********************/


#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main() {

	double sideA = 3.847;
	double sideB = 5.33;
	double sideC = 7.167;
	float angleA, angleB, angleC, angleCChecked, p;

	angleA = acos((pow(sideB, 2) + pow(sideC, 2) - pow(sideA, 2)) / (2 * sideB * sideC));
	angleB = asin((sideB * sin(angleA)) / sideA);
	angleC = M_PI - angleA - angleB;
	p = (sideA + sideB + sideC) / 2;
	angleCChecked = 2 * atan(sqrt(((p - sideA) * (p - sideB)) / (p * (p - sideC))));

	if (angleC == angleCChecked) {
		cout << angleA << "; " << angleB << "; " << angleC;
	}
}