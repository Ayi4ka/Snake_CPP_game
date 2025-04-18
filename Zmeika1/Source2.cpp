#include "Header2.h"
#include "Header1.h"
#include "Header.h"
#include "Header3.h"
#include "MyForm.h"

using namespace Zmeika1;
//������ ������ ��������
bool Actions::getGame() {
	return InGame;
}

void Actions::setGame(bool a) {
	InGame = a;
}

void Actions::checkCollisions() { //�������� �� ������������
	//�������� �� ��������� �� ���������� ������ � ������ ��������� ������ ����
	for (int i = snake.getSizeSnake(); i > 0; i--) {
		if (snake.getSizeSnake() >= 4 && snake.getX(0) == snake.getX(i) && snake.getY(0) == snake.getY(i)) {
			InGame = false;

		}
	}
	//�� �� ����� ��������, �� ��� �� ����� ����
	if (snake.getX(0) >= area.AREA_X) {
		InGame = false;
	}
	if (snake.getX(0) < 0) {
		InGame = false;
	}
	if (snake.getY(0) >= area.AREA_Y) {
		InGame = false;
	}
	if (snake.getY(0) < 0) {
		InGame = false;
	}
}
void Actions::moveSnake() {
	for (int i = snake.getSizeSnake(); i > 0; i--)
	{
		snake.x[i] = snake.x[i - 1];
		snake.y[i] = snake.y[i - 1];
	}
	//�������� � ������ �����������, ����� ����������� ��� ��������� �������� ��������� �� �������
	if (snake.getLeft()) {
		snake.setX(-1);
	}
	if (snake.getRight()) {
		snake.setX(1);
	}
	if (snake.getUp()) {
		snake.setY(-1);
	}
	if (snake.getDown()) {
		snake.setY(1);
	}
}
Actions actions;