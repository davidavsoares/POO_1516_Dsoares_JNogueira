#pragma once
#include "bibliotecas.h"
#include "Sala.h"
#include "consola.h"
#include "Propulsor.h"

class Nave
{
	vector<Sala *> salas;
public:
	Nave();
	void DesenhaNave(int x, int y, int tamanho);
	~Nave();
	void adiciona(Sala *p);
	string toString()const;

	void Quadrado(int x, int y, Consola c, int sala, int tamanho);
};



