#pragma once
#ifndef APPLE
#define APPLE
//��� ������� ����� �����
class Apple {
private:
	int AppleX; //���������� �����
	int AppleY;
	int time_speed; 
public:
	//������ ��� �����
	void setAppleX(int a);
	void setAppleY(int a);
	void setTimeSpeed(int a); //��� �������� ������, ��� ���������� ��������
	void minus();
	void createApple();
	int getAppleX();
	int getAppleY();
	int getTimeSpeed();
};
//���������� ���������� ��������, ������ ������� 
extern Apple apple;
extern Apple apple_Speed;
extern Apple apple_toxic;
extern Apple apple_big;
extern Apple apple_telep;

#endif 
