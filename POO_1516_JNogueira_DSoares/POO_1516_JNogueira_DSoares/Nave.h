#pragma once
#include "bibliotecas.h"
#include "Nave.h"
class Nave
{
public:
	Nave(int x, int y, int tamanho);
	~Nave();


	void Quadrado(int x, int y, Consola c, int sala, int tamanho);
};



