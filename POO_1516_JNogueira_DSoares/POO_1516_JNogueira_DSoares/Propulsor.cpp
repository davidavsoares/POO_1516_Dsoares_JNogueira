#include "Propulsor.h"

Propulsor::Propulsor(int id, Nave * Spaceship):Sala(id, "Propulsor") 
{
	string tipo = "Propulsor";
	Spaceship->incrementa_propulsores();

}


Propulsor::~Propulsor()
{

}
