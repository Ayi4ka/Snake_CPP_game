#pragma once
#ifndef AREA
#define AREA
//����� ������� ����������� 
class Area {
public:
	static const int AREA_X = 80; //���������� � ������ �������� ����������� 
	static const int AREA_Y = 64;
	static const int SIZE = 5120;
	int difficult;
public:
	Area(); 
	~Area();
	int getDifficult(); //������ ��������� 
	void setDifficult(int a);
};

extern Area area;
#endif