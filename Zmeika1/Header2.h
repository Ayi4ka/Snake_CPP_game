#pragma once
#ifndef ACTIONS
#define ACTIONS
//����� ��������
class Actions {
private:
	bool InGame = false; //��������� ���������� ����������� �� �� � ���� �� ����
public:
	void setGame(bool a); 
	bool getGame(); 
	void moveSnake(); //�������� ����
	void checkCollisions(); //�������� �� ������������ � ������������� � �������
};
extern Actions actions;
#endif 



