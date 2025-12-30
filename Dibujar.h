#pragma once
#include"Header.h"
class Dibujar
{
protected:
	int x, y, ancho, alto, dx, dy;
public:
	Dibujar(int ancho, int alto) {
		this->ancho = ancho;
		this->alto = alto;
		this->x = aleatorio(0, ANCHO - ancho);
		this->y = aleatorio(0, ALTO - alto);
		this->dx = 3; this->dy = 3;
	}
	~Dibujar() {}
	virtual void mostrar() {}
	virtual void mover() {}
	void borrar() {
		for (int i = 0; i < alto; i++) {
			for (int j = 0; j < ancho; j++) {
				ubicar(x + j, y + i);
				cout << " ";
			}
		}
	}
	System::Drawing::Rectangle getRectangle() {
		return System::Drawing::Rectangle(x, y, ancho, alto); }
};
