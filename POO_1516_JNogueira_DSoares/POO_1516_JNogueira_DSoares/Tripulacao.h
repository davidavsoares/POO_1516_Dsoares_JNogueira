#pragma once
#include "Unidade.h"

class Tripulacao :
	public Unidade
	
{
public:
	Tripulacao(string nome, int PV, int Respira, int Flamejante, int Toxico, int Indeciso, int Misterioso, int Regenerador, int Exoesqueleto, int Robótico, int Reparador, int Combatente, int Xenomorfo, int Casulo, int Mutatis, int Hipnotizador, int Operador, int Move, int Armado);
	~Tripulacao();
};

