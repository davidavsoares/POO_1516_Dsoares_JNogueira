#pragma once
#include "Unidade.h"

class Tripulacao :
	public Unidade
	
{
public:
	Tripulacao(string nome, int PV, int Respira, bool Flamejante, int Toxico, int Indeciso, bool Misterioso, int Regenerador, int Exoesqueleto, bool Robotico, int Reparador, int Combatente, int Xenomorfo, int Casulo, int Mutatis, int Hipnotizador, bool Operador, int Move, int Armado);
	~Tripulacao();
};

