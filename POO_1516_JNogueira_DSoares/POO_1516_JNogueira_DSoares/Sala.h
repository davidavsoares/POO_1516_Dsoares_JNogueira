#pragma once
#include "bibliotecas.h"
#include "Unidade.h"

class Nave;
class Sala
{
	vector<Unidade *> unidades;
	int oxigenio, integridade, saude, id;
public:
	Sala(int id);
	~Sala();
	string toString()const;
	//int getSaude();					// Saude == Integridade?????
	int getOxigenio();				// Retorna a quantidade de oxigenio
	int getIntegridade();			//Retorna a integridade
	int getId();					// Retorna o id
	void adiciona(Unidade * p);		// Adiciona uma unidade á sala
	void remove(int id);			// Remove uma unidade de uma determinada sala indicando o ID da unidade
	int procura(char nome) const;		// Procura um id 
	Unidade * RetornaLocal(char nome);
};

