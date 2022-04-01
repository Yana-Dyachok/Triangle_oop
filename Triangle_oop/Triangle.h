#pragma once
class Triangle_type//клас  Triangle_type
{
private:
	int x1, x2, x3, y1, y2, y3;//ініціалізуємо координати  вершин трикутника
	double AB, BC, AC;//ініціалізуємо сторони трикутника
public:
	Triangle_type(void);//конструктор за замовчуванням
	Triangle_type(int, int, int, int, int, int);//конструктор з параметрами
	void Print();// метод виводить координати трикутника 
	void sides_T();//метод знаходить сторони трикутника
	void checkSides();//метод визначає тип трикутника за сторонами
	void checkAngles();//метод визначає тип трикутника за кутами
};