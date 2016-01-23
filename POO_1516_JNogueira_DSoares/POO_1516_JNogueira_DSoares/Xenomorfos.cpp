#include "Xenomorfos.h"


Xenomorfos::Xenomorfos(string nome, int PV, int Respira, bool Flamejante, int Toxico, int Indeciso, bool Misterioso, int Regenerador, int Exoesqueleto, bool Robotico, int Reparador, int Combatente, int Xenomorfo, int Casulo, int Mutatis, int Hipnotizador, bool Operador, int Move, int Armado)
	: Unidade(nome, /*Entidade=*/ 3, PV, Respira, Flamejante, Toxico, Indeciso,	Misterioso, Regenerador, Exoesqueleto, Robotico, Reparador, Combatente, Xenomorfo, Casulo, Mutatis, Hipnotizador, Operador, /*Tripulacao*/ 0, /*InimigoX*/ 0, /*InimigoY*/ 0, Move, Armado)
{
}


Xenomorfos::~Xenomorfos()
{
}