#include "Inimigos.h"

Inimigos::Inimigos(string nome, int PV, int Respira, int Flamejante, int Toxico, int Indeciso, int Misterioso, int Regenerador, int Exoesqueleto, int Rob�tico, int Reparador, int Combatente, int Xenomorfo, int Casulo, int Mutatis, int Hipnotizador, int Operador, int Move, int Armado)
	: Unidade(nome, /*Tipo=*/ 2, PV, Respira, Flamejante, Toxico, Indeciso, Misterioso, Regenerador, Exoesqueleto, Rob�tico, Reparador, Combatente, Xenomorfo, Casulo, Mutatis, Hipnotizador, Operador, /*Tripula��o*/ 0,/* Inimigo*/ 1, Move, Armado)
{
}


Inimigos::~Inimigos()
{
}