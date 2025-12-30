#pragma once
#include"ArregloFantasma.h"
#include"ArregloPastilla.h"
class Juego
{
private:
	ArregloPastilla* arrPastilla;
	Arreglofantasma* arrFantasma;
	Ghost* ghost;
public:
	Juego() {
		arrPastilla = new ArregloPastilla();
		arrFantasma = new Arreglofantasma();
		ghost = new Ghost();
	}
	~Juego() {
		delete arrPastilla;
		delete arrFantasma;
		delete ghost;
	}
	void mover() {

		for (int i = 0; i < 4; i++) {
			arrPastilla->agregar();
		}

		arrFantasma->agregarFantasma();
		arrFantasma->agregarFantasma();

		while (true) {
			int x = 0, y = 0;
			ubicar(x, y);
			cout << "Pastilla: " << arrPastilla->getPastilla();
			if (_kbhit()) {
				char tecla = _getch();
				ghost->borrar();
				ghost->mover(tecla);
				ghost->mostrar();

			}
			arrPastilla->moverTodo();
			arrFantasma->moverTodoFantasma();
			arrFantasma->colisionFantasma(ghost);
			arrPastilla->colisionPastilla(ghost);
			_sleep(100);
		}
	}

};

