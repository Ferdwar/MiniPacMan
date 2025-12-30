#pragma once
#include"Pastilla.h" 
#include"Ghost.h"
class ArregloPastilla
{
private:
	vector<Pastilla*>* arrPastilla;
	int pastilla;

public:
	ArregloPastilla() {
		arrPastilla = new vector<Pastilla*>();
		pastilla = 0;
	}
	~ArregloPastilla() {
		delete[]arrPastilla;
	}
	int getPastilla() { return this->pastilla; }
	void agregar() {
		arrPastilla->push_back(new Pastilla());
	}
	void moverTodo() {
		for (int i = 0; i < arrPastilla->size(); i++) {
			arrPastilla->at(i)->borrar();
			arrPastilla->at(i)->mover();
			arrPastilla->at(i)->mostrar();
		}
	}
	void colisionPastilla(Ghost* ghost) {
		for (int i = 0; i < arrPastilla->size(); i++) {
			if (arrPastilla->at(i)->getRectangle().IntersectsWith(ghost->getRectangle())) {
				arrPastilla->at(i)->borrar();
				arrPastilla->erase(arrPastilla->begin() + i);
				pastilla++;
				if (pastilla == 4) {
					ubicar(ANCHO / 2, ALTO / 2);
					cout << "GANASTE! USTED ES EL GANADOR!";
					_getch();
					exit(0);
				}
				break;
			}
		}
	}

};
