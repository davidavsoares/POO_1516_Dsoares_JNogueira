#include "Tripulacao.h"



Tripulacao::Tripulacao(string nome, int PV, int Respira, bool Flamejante, int Toxico, int Indeciso, bool Misterioso, int Regenerador, int Exoesqueleto, bool Robotico, int Reparador, int Combatente, int Xenomorfo, int Casulo, int Mutatis, int Hipnotizador, bool Operador, int Move, int Armado)
	: Unidade(nome, /*Entidade=*/ 1, PV, Respira, Flamejante, Toxico, Indeciso, Misterioso, Regenerador, Exoesqueleto, Robotico, Reparador, Combatente, Xenomorfo, Casulo, Mutatis, Hipnotizador, Operador, /*Tripulacao*/ 1, /*InimigoX*/ 0, /*InimigoY*/ 0, Move, Armado)
{


}


Tripulacao::~Tripulacao()
{
}
