/*Class - тип трикутника
Написати клас Triangle (трикутник), що містить поля координати вершин трикутника цілого типу x1,y1,x2,y2,x3,y3.
Реалізувати конструктори:по замовчуванню, що обнулює координати вершин трикутника;з парамитрами, що отримує координати цілого типу вершин трикутника і ініціаліхує їх.
Реалізувати методи які перевітяють тип трикутника. Реалізуйте меню для користувача: 
1 - Введення даних
2 - Виведення даних
0 - Вихід*/
#include <iostream>
#include "Triangle.h"
using namespace std;
int main()
{	char user=0;//завдяки даній змінні,користувач буде робити вибір
	int x1, x2, x3, y1, y2, y3;//координати вершин трикутника
	cout << "Let's find out types of triangle, using coordinates of triangle's points " << endl;
	cout << "But first of all input six coordinates" << endl;
	cin >> x1 >> x2 >> x3>> y1 >> y2 >> y3;
	cout << "If you want to see what types of triangle - input  two '2'" << endl;
	cout << "Input one '1' if you want to start again" << endl;
	cout << "If you want to stop  - input zero '0'" << endl;
	while (user != '0') {//при введенні нуля - вихід з програми
		Triangle_type Triangle(x1, x2, x3, y1, y2, y3);
		cout << "please, input number="; cin >> user;
		if (user == '1') {//1 - Введення даних
			cout << "Enter six coordinates" << endl;
			cin >> x1 >> x2 >> x3>> y1 >> y2 >> y3;
		}
		if (user == '2') {//2 - Виведення даних
			Triangle.Print();//виводимо значення координат
			cout << "Sides of the triangle:" << endl; Triangle.sides_T();//виводимо сторони трикутника
			Triangle.checkSides(); cout<< "  and  ";//виводимо типи трикутників
			Triangle.checkAngles(); cout << endl;
		}
		else { cout << "Error, try again" << endl; }
	}
}