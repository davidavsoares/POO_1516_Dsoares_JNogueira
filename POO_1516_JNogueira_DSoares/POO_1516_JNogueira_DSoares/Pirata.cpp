#include "Pirata.h"

Pirata::Pirata(string nome)		//INIMIGO 1,2!!!! 
	:Inimigos(nome				 ,
			/*PV*/				4,
			/*Respira:*/		1,
			/*Flamejante:*/		0,
			/*Toxico:*/			0,
			/*Indeciso:*/		0,
			/*Misterioso:*/		0,
			/*Regenerador:*/	0,
			/*Exoesqueleto:*/	0,
			/*Robotico:*/		0,
			/*Reparador:*/		0,
			/*Combatente:*/		0,
			/*Xenomorfo:*/		0,
			/* Casulo:*/		0,
			/*Mutatis:*/		0,
			/*Hipnotizador:*/	0,
			/*Operador:*/		0,
			/*Move:*/			15,
			/*Armado:*/			0
			)
{

}

//InimigoX, InimigoY(X, Y) : Sempre que termina o turno numa sala na qual se encontram unidades não
//inimigas(tripulacão ou Xenomorfo), provoca X pontos de dano a uma delas.Caso contrário,
//provoca Y pontos de dano na sala.



Pirata::~Pirata()
{
}