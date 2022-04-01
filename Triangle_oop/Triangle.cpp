#include "Triangle.h"
#include <stdio.h>// cout не ідентифікується, тому використовуємо printf і бібліотеку відповідну
#include <cmath>
using namespace std;
Triangle_type::Triangle_type() {//конструктор за замовчуванням
	x1 = 0;  x2 = 0; x3 = 0; y1 = 0; y2 = 0; y3 = 0;//обнулюємо координати
}
Triangle_type::Triangle_type(int x1, int x2, int x3, int y1, int y2, int y3) {//конструктор з параметрами
	this->x1 = x1;
	this->x2 = x2;
	this->x3 = x3;
	this->y1 = y1;
	this->y2 = y2;
	this->y3 = y3;
}
void Triangle_type::Print() {//метод виводить координати трикутника
	printf("x1=%d\t", x1);
	printf("x2=%d\t", x2);
	printf("x3=%d\t", x3);
	printf("y1=%d\t", y1);
	printf("y2=%d\t", y2);
	printf("y3=%d\n", y3);
}
void Triangle_type::sides_T() {//метод знаходить сторони трикутника
	AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	BC = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	AC = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	printf("AB=%f\t", AB);
	printf("BC=%f\t", BC);
	printf("AC=%f\n", AC);
}
void Triangle_type::checkSides() {//метод визначає тип трикутника за сторонами
	if ((AB == BC)and (BC==AC)) printf("Equilateral triangle");
	else if (((AB == BC)and (AB != AC)) or ((AB==AC)and (BC != AC))or((BC==AC)and (AB != BC))) printf("Isoceles triangle");
    else if((AB!=BC)and (AB!=AC) and (BC!= AC)) printf("Scalene triangle");
}
void Triangle_type::checkAngles() {//метод  визначає тип трикутника за кутами
	if ((pow(AB,2)+pow(BC,2)==pow(AC,2))or (pow(AC,2) + pow(BC,2) == pow(AB,2))or(pow(AB,2) + pow(AC,2) == pow(BC,2))) printf("Right  triangle");
	else if (((pow(AB,2) + pow(BC,2))> pow(AC,2)) or ((pow(AC,2) + pow(BC,2))> pow(AB,2)) or ((pow(AB,2) + pow(AC,2))>pow(BC,2))) printf("Acute triangle");
	else if (((pow(AB, 2) + pow(BC, 2))<pow(AC, 2)) or ((pow(AC, 2) + pow(BC, 2))< pow(AB, 2)) or ((pow(AB, 2) + pow(AC, 2))< pow(BC, 2))) printf("Obtuse triangle");
}