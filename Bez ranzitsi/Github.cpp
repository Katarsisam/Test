#include <iostream>
#include <stdio.h>

int main() {
	;
	int a = 1;
	int b = 2; //Меньшее основание
	int c = 3; //Как и a - боковая сторона
	int d = 4; //Большее основание
	int h = 3; //высота
	int P = a + b + c + d;
	int S = (b + d) / h;
	int l = (b + d) / 2;
	printf("%d,%d,%d", P, S, l);
}