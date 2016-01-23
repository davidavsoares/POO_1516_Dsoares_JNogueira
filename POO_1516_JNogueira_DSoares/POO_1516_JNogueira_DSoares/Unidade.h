#pragma once
#include "bibliotecas.h"



class Sala;
class Unidade
{

	Sala *ondeEstou = nullptr;
	int saude = 100;
	string nome;
	int Tipo, PV, Respira, Flamejante, Toxico, Indeciso, Misterioso, Regenerador, Exoesqueleto, Robótico, Reparador, Combatente, Xenomorfo, Casulo, Mutatis, Hipnotizador, Operador,Tripulação,Inimigo,Move, Armado;
public:
	Unidade(string nome, int Tipo, int PV, int Respira, int Flamejante, int Toxico, int Indeciso, int Misterioso, int Regenerador, int Exoesqueleto, int Robótico, int Reparador, int Combatente, int Xenomorfo, int Casulo, int Mutatis, int Hipnotizador, int Operador,int Tripulação,int Inimigo,int Move, int Armado);
	~Unidade();

	void setOndeEstou(Sala * p);		// Define a sala em que se encontra
	Sala * getOndeEstou();				// Indica a sala em que se encontra
	void SofrerDano(int Dano);			// Remove a quantidade de saude indicada em "Dano" a uma unidade
	string getNome();					//Retorna o id de uma unidade
	void printNome(int x, int y, Consola &c);
	int getTipo();
};

