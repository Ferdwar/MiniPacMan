#pragma once
#include"Dibujar.h"
class Fantasma :public Dibujar
{
public:
	Fantasma() :Dibujar(5, 4) {}
	~Fantasma() {}
	void mostrar() {
		Console::ForegroundColor = ConsoleColor::Blue;
		ubicar(x, y);      cout << " .-. ";
		ubicar(x, y + 1);  cout << "| oo|";
		ubicar(x, y + 2);  cout << "|   |";
		ubicar(x, y + 3);  cout << "'^^^'";
	}

	void mover() {
		if (y + dy <= 0 || y + dy + alto >= ALTO)dy *= -1;

		y += dy;
	}

};

