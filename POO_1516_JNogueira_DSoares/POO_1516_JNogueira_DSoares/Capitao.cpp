#include "Capitao.h"

Capitao::Capitao()
	:Tripulacao("C",
		/*PV*/				6,
		/*Respira:*/		1,
		/*Flamejante:*/		0,
		/*Toxico:*/			0,
		/*Indeciso:*/		0,
		/*Misterioso:*/		0,
		/*Regenerador:*/	0,		
		/*Exoesqueleto:*/	0,
		/*Robotico:*/		0,
		/*Reparador:*/		1,		
		/*Combatente:*/		1,
		/*Xenomorfo:*/		0,
		/* Casulo:*/		0,
		/*Mutatis:*/		0,
		/*Hipnotizador:*/	0,
		/*Operador:*/		1,
		/*Move:*/			0,
		/*Armado:*/			0
		)
{

}



Capitao::~Capitao()
{
}

Capitao::Capitao(Unidade & outro) :Tripulacao(outro, "C",
	/*PV*/				6,
	/*Respira:*/		1,
	/*Flamejante:*/		0,
	/*Toxico:*/			0,
	/*Indeciso:*/		0,
	/*Misterioso:*/		0,
	/*Regenerador:*/	0,
	/*Exoesqueleto:*/	0,
	/*Robotico:*/		0,
	/*Reparador:*/		1,
	/*Combatente:*/		1,
	/*Xenomorfo:*/		0,
	/* Casulo:*/		0,
	/*Mutatis:*/		0,
	/*Hipnotizador:*/	0,
	/*Operador:*/		1,
	/*Move:*/			0,
	/*Armado:*/			0
	)
{

}