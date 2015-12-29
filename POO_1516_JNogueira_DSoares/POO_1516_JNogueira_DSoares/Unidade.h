#pragma once
#include "bibliotecas.h"

class Sala;
class Unidade
{

	Sala *ondeEstou = nullptr;
	int saude = 100, id;
	static int contador;
public:
	Unidade();
	~Unidade();

	void setOndeEstou(Sala * p);		// Define a sala em que se encontra
	Sala * getOndeEstou();				// Indica a sala em que se encontra
	void SofrerDano(int Dano);			// Remove a quantidade de saude indicada em "Dano" a uma unidade
	int getId();						//Retorna o id de uma unidade
};

