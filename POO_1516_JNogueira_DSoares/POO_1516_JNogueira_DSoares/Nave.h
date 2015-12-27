#pragma once
#include "bibliotecas.h"
#include "Sala.h"

class Nave
{
	vector<Sala *> salas;
public:
	Nave(int x, int y, int tamanho);
	~Nave();
	void adiciona(Sala *p);
	string toString()const;

	void Quadrado(int x, int y, Consola c, int sala, int tamanho);
};



