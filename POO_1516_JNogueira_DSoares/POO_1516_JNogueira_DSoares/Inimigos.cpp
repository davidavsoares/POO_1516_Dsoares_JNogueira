#include "Inimigos.h"

Inimigos::Inimigos(string nome, int PV, int Respira, bool Flamejante, int Toxico, int Indeciso, bool Misterioso, int Regenerador, int Exoesqueleto, bool Robotico, int Reparador, int Combatente, int Xenomorfo, int Casulo, int Mutatis, int Hipnotizador, bool Operador, int Move, int Armado)
	: Unidade(nome, /*Entidade=*/ 2, PV, Respira, Flamejante, Toxico, Indeciso, Misterioso, Regenerador, Exoesqueleto, Robotico, Reparador, Combatente, Xenomorfo, Casulo, Mutatis, Hipnotizador, Operador, /*Tripulacao*/ 0,/* InimigoX*/ 1, /*InimigoY*/ 2, Move, Armado)
{
}


Inimigos::~Inimigos()
{
}



