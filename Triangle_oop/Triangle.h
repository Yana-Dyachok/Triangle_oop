#pragma once
class Triangle_type//����  Triangle_type
{
private:
	int x1, x2, x3, y1, y2, y3;//���������� ����������  ������ ����������
	double AB, BC, AC;//���������� ������� ����������
public:
	Triangle_type(void);//����������� �� �������������
	Triangle_type(int, int, int, int, int, int);//����������� � �����������
	void Print();// ����� �������� ���������� ���������� 
	void sides_T();//����� ��������� ������� ����������
	void checkSides();//����� ������� ��� ���������� �� ���������
	void checkAngles();//����� ������� ��� ���������� �� ������
};