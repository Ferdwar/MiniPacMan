#include"Juego.h"
int main() {
	srand(time(NULL));
	ajustarConsola();
	Console::CursorVisible = false;
	Juego* juego = new Juego();
	juego->mover();
	_getch();
}