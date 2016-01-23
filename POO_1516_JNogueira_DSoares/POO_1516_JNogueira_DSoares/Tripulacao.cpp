#include "Tripulacao.h"



Tripulacao::Tripulacao(string nome, int PV, int Respira, int Flamejante, int Toxico, int Indeciso, int Misterioso, int Regenerador, int Exoesqueleto, int Robótico, int Reparador, int Combatente, int Xenomorfo, int Casulo, int Mutatis, int Hipnotizador, int Operador, int Move, int Armado)
	: Unidade(nome, /*Tipo=*/ 1, PV, Respira, Flamejante, Toxico, Indeciso, Misterioso, Regenerador, Exoesqueleto, Robótico, Reparador, Combatente, Xenomorfo, Casulo, Mutatis, Hipnotizador, Operador, /*Tripulação*/ 1, /*Inimigo*/ 0, Move, Armado)
{
}


Tripulacao::~Tripulacao()
{
}
