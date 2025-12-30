#pragma once
#include"Dibujar.h"
class Pastilla :public Dibujar
{
public:
	Pastilla() :Dibujar(3, 3) {}
	~Pastilla() {}
	void mostrar() {
		Console::ForegroundColor = ConsoleColor::White;
		ubicar(x, y);       cout << " _ ";
		ubicar(x, y + 1);   cout << "(_)";

	}
	void mover() {}
};

