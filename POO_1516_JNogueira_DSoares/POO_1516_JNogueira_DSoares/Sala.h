#pragma once
#include "bibliotecas.h"
#include "Unidade.h"

class Nave;
class Sala
{
	vector<Unidade *> unidades;
	int oxigenio, integridade, saude, id, contador = 0;
	string nome;
public:
	Sala(int id, string n);
	~Sala();
	string toString()const;
	void toStatus(Consola &c, int x, int y);
	//int getSaude();					// Saude == Integridade?????
	int getOxigenio();				// Retorna a quantidade de oxigenio
	int getIntegridade();			//Retorna a integridade
	int getId();					// Retorna o id
	void adiciona(Unidade * p);		// Adiciona uma unidade á sala
	void remove(string nome);			// Remove uma unidade de uma determinada sala indicando o nome da unidade
	int procura(string nome) const;		// Procura um id
	string getNome()const;					// Retorna Nome da sala
	//void setNome();						// Adiciona nome à sala
	Unidade * RetornaLocal(string nome);

	//void mostra_trip(int x, int y, Consola &c);				// Imprime as unidades presente na sala

	int getNUnidades();
	void repara();
	void Consome_oxigenio();
	int getOperadores();		//Retorna o numero de unidades com capacidade de OPERADOR existentes na sala
};

