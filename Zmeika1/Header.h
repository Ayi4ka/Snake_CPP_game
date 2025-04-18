#pragma once
#ifndef SNAKE
#define SNAKE
#include <string>
//����� ������ 
class Snake {
private:
	int sizeSnake; //������ ������
	bool right = false; //������� ���������� �����������
	bool left = true;
	bool up = false;
	bool down = false;
	std::string name; //�������� ������ 
public:
	Snake();
	~Snake();
	int x[5120]; //���������� ������
	int y[5120];
	//������ ������
	
	void addDots(); //���������� ������
	void removeDots(); //��������� ������
	void createSnake(); //�������� ������ ������

	void setX(int a); //������� ������� ���������
	void setY(int a);
	int getX(int a);
	int getY(int a);

	int getSizeSnake();

	void setLeft(bool a); //������� ����������� 
	void setRight(bool a);
	void setUp(bool a);
	void setDown(bool a);

	void setName(std::string a);
	std::string getName();

	bool getRight(); //������� ����������� 
	bool getLeft();
	bool getUp();
	bool getDown();
};
extern Snake snake; //������ ����
#endif