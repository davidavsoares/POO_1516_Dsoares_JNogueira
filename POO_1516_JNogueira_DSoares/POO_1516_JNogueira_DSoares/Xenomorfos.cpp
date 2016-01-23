#include "Xenomorfos.h"


Xenomorfos::Xenomorfos(string nome, int PV, int Respira, int Flamejante, int Toxico, int Indeciso, int Misterioso, int Regenerador, int Exoesqueleto, int Robótico, int Reparador, int Combatente, int Xenomorfo, int Casulo, int Mutatis, int Hipnotizador, int Operador, int Move, int Armado)
	: Unidade(nome, /*Tipo=*/ 3, PV, Respira, Flamejante, Toxico, Indeciso,	Misterioso, Regenerador, Exoesqueleto, Robótico, Reparador, Combatente, Xenomorfo, Casulo, Mutatis, Hipnotizador, Operador, /*Tripulação*/ 0, /*Inimigo*/ 1, Move, Armado)
{
}


Xenomorfos::~Xenomorfos()
{
}