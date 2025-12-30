#pragma once
#include <iostream>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include <vector>
#include <stdio.h>
#define ANCHO 90
#define ALTO 30

using namespace System::Drawing;
using namespace std;
using namespace System;

void ajustarConsola() {
	Console::SetWindowSize(ANCHO, ALTO);
}
void ubicar(int x, int y) {
	Console::SetCursorPosition(x, y);
}
int aleatorio(int numI, int numF) {
	return numI + rand() % (numF + 1 - numI);
}

