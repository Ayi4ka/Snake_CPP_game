#include "Header.h"
#include "Header1.h"
//������ ������ ������, ����� �������� ��� ��� ��������� � ������ ������
Snake::Snake() {
	snake.sizeSnake = 1; //��������� ������ ������, ��� ������
}
Snake::~Snake() {

}
void Snake::createSnake() {
	snake.x[0] = 10 + rand() % (area.AREA_X - 10); //��������� ������ ��������� ������
	snake.y[0] = 10 + rand() % (area.AREA_Y - 10);
}
void Snake::addDots() {
	snake.sizeSnake += 1; //����������� � ������
}
void Snake::removeDots() {
	snake.sizeSnake = 1; //��������� ������ � ��������� ����������
}
void Snake::setX(int a) {
	snake.x[0] += a;
}
void Snake::setY(int a) {
	snake.y[0] += a;
}

std::string Snake::getName() {
	return name;
}

void Snake::setName(std::string a) {
	name = a;
}

int Snake::getSizeSnake() {
	return snake.sizeSnake;
}
int Snake::getX(int a){
	return snake.x[a];
}
int Snake::getY(int a) {
	return snake.y[a];
}
//���������� ��������
bool Snake::getDown() {
	return snake.down;
}
bool Snake::getUp() {
	return snake.up;
}
bool Snake::getLeft() {
	return snake.left;
}
bool Snake::getRight() {
	return snake.right;
}

void Snake::setDown(bool a) {
	snake.down = a;
}
void Snake::setUp(bool a) {
	snake.up = a;
}
void Snake::setLeft(bool a) {
	snake.left = a;
}
void Snake::setRight(bool a) {
	snake.right = a;
}

Snake snake;



