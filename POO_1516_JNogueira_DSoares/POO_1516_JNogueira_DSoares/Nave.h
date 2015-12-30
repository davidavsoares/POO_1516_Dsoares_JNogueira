#pragma once
#include "bibliotecas.h"
#include "Sala.h"
#include "consola.h"
#include "Propulsor.h"
#include "Beliche.h"
#include "Sala_Maquinas.h"
#include "Suporte_Vida.h"
#include "Controlo_Escudo.h"
#include "Ponte.h"

#include "Memb_Trip.h"

class Nave
{
	vector<Sala *> salas;

	int conta_propulsores = 0;
public:
	Nave();
	void DesenhaNave(int x, int y, int tamanho);
	~Nave();
	void adiciona(Sala *p);
	string toString()const;

	void Quadrado(int x, int y, Consola c, int sala, int tamanho);

	void incrementa_propulsores();
	void MoveTripulante(char nome, int room);
};



