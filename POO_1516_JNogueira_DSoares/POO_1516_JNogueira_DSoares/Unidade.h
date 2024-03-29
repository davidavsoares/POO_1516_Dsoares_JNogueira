#pragma once
#include "bibliotecas.h"



class Sala;
class Unidade
{

	Sala *ondeEstou = nullptr;

	string nome;
	int turno_casulo;
	int Entidade, PV, Respira, Toxico, Regenerador, Exoesqueleto, Reparador, Combatente, Xenomorfo, Casulo, Mutatis, Hipnotizador, InimigoX, InimigoY, Move, Armado, Saude_inicial;
	bool Flamejante, Indeciso, Misterioso, Robotico, Operador, Tripulacao;
	int Exoesqueleto_inicial;
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
	int getSaude();
	int getSaude_inicial();
	int getRegenerador();
	void setSaude(int cura);
	string toString();
	int getMutatis();
	bool getFlamejante();
	bool AnalisaUnidade();
	int getMove();


	int getCombatente()const;
	int getArmado()const;
	int getInimigoX()const;
	int getInimigoY()const;
	int getTurnoCasulo()const;
	void setTurnoCasulo(int x);
	int getCasulo() const;

	Unidade(Unidade & outro, string nome, int Entidade, int PV, int Respira, bool Flamejante, int Toxico, bool Indeciso, bool Misterioso, int Regenerador, int Exoesqueleto, bool Robotico, int Reparador, int Combatente, int Xenomorfo, int Casulo, int Mutatis, int Hipnotizador, bool Operador, bool Tripulacao, int InimigoX, int InimigoY, int Move, int Armado);
	int getXenomorfo();
	void ReporExoesqueleto();
	void setArmado(int i);
};

