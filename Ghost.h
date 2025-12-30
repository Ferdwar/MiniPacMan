#pragma once
#include "Dibujar.h"
class Ghost :public Dibujar
{
public:
	Ghost() : Dibujar(10, 5) {}
	~Ghost() {}
	void mostrar() {
		Console::ForegroundColor = ConsoleColor::Yellow;
		ubicar(x, y);       cout << "  -----   ";
		ubicar(x, y + 1);   cout << " /    O\  ";
		ubicar(x, y + 2);   cout << "|      <  ";
		ubicar(x, y + 3);   cout << " \     /  ";
		ubicar(x, y + 4);   cout << "  -----   ";

	}
	void mover(char tecla) {
		switch (tecla)
		{
		case 'W':if (y > 0)y--; break;
		case 'S':if (y < ALTO)y++; break;
		case 'A': if (x > 0)x--; break;
		case 'D': if (x < ANCHO)x++; break;
		}

	}


};

