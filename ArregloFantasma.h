#pragma once
#include"Fantasma.h"
#include"Ghost.h"
class Arreglofantasma
{
private:
	vector<Fantasma*>* arrF;
	int fantasma;
public:
	Arreglofantasma() {
		arrF = new vector<Fantasma*>();
		fantasma = 0;
	}
	~Arreglofantasma() {
		delete[]arrF;
	}
	int getFantasma() { return this->fantasma; }
	void agregarFantasma() {
		arrF->push_back(new Fantasma());
	}
	void moverTodoFantasma() {
		for (int i = 0; i < arrF->size(); i++) {
			arrF->at(i)->borrar();
			arrF->at(i)->mover();
			arrF->at(i)->mostrar();
		}
	}
	void colisionFantasma(Ghost* ghost) {
		for (int i = 0; i < arrF->size(); i++) {
			if (arrF->at(i)->getRectangle().IntersectsWith(ghost->getRectangle())) {
				if (fantasma == 3) {
					ubicar(ANCHO / 2, ALTO / 2);
					cout << "GAME OVER!";
					_getch();
					exit(0);
				}
			}
		}
	}

};