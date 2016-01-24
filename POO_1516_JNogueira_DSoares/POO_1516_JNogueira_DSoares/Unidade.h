#pragma once
#include "bibliotecas.h"



class Sala;
class Unidade
{

	Sala *ondeEstou = nullptr;

	string nome;
	int Entidade, PV, Respira, Toxico, Regenerador, Exoesqueleto, Reparador, Combatente, Xenomorfo, Casulo, Mutatis, Hipnotizador, InimigoX, InimigoY, Move, Armado;
	bool Flamejante, Indeciso, Misterioso, Robotico, Operador, Tripulacao;
public:
	Unidade(string nome, int Entidade, int PV, int Respira, bool Flamejante, int Toxico, bool Indeciso, bool Misterioso, int Regenerador, int Exoesqueleto, bool Robotico, int Reparador, int Combatente, int Xenomorfo, int Casulo, int Mutatis, int Hipnotizador, bool Operador,bool Tripulacao,int InimigoX, int InimigoY,int Move, int Armado);
	~Unidade();

	void setOndeEstou(Sala * p);		// Define a sala em que se encontra
	Sala * getOndeEstou();				// Indica a sala em que se encontra
	void SofrerDano(int Dano);			// Remove a quantidade de saude indicada em "Dano" a uma unidade
	string getNome();					//Retorna o id de uma unidade
	void printNome(int x, int y, Consola &c);
	int getTipo();
	int getReparador();
	int getRespira();
	bool getOperador();
	int getInimigoX();
	bool getIndeciso();
};

