#include "Robot.h"

Robot::Robot()
	:Tripulacao("R",
		/*PV*/				8,
		/*Respira:*/		0,
		/*Flamejante:*/		0,
		/*Toxico:*/			0,
		/*Indeciso:*/		0,
		/*Misterioso:*/		0,
		/*Regenerador:*/	0,
		/*Exoesqueleto:*/	2,
		/*Robotico:*/		0,
		/*Reparador:*/		0,
		/*Combatente:*/		3,
		/*Xenomorfo:*/		0,
		/* Casulo:*/		0,
		/*Mutatis:*/		0,
		/*Hipnotizador:*/	0,
		/*Operador:*/		0,
		/*Move:*/			0,
		/*Armado:*/			0
		)
{

}



Robot::~Robot()
{
}

Robot::Robot(Unidade & outro)
	:Tripulacao(outro,"R",
		/*PV*/				8,
		/*Respira:*/		0,
		/*Flamejante:*/		0,
		/*Toxico:*/			0,
		/*Indeciso:*/		0,
		/*Misterioso:*/		0,
		/*Regenerador:*/	0,
		/*Exoesqueleto:*/	2,
		/*Robotico:*/		0,
		/*Reparador:*/		0,
		/*Combatente:*/		3,
		/*Xenomorfo:*/		0,
		/* Casulo:*/		0,
		/*Mutatis:*/		0,
		/*Hipnotizador:*/	0,
		/*Operador:*/		0,
		/*Move:*/			0,
		/*Armado:*/			0
		)
{

}