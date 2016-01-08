#pragma once
#include "bibliotecas.h"



class Sala;
class Unidade
{

	Sala *ondeEstou = nullptr;
	int saude = 100;
	string nome;
	char Tipo = '0';
public:
	Unidade(string nome);
	~Unidade();

	void setOndeEstou(Sala * p);		// Define a sala em que se encontra
	Sala * getOndeEstou();				// Indica a sala em que se encontra
	void SofrerDano(int Dano);			// Remove a quantidade de saude indicada em "Dano" a uma unidade
	string getNome();						//Retorna o id de uma unidade
	void printNome(int x, int y, Consola &c);
};

