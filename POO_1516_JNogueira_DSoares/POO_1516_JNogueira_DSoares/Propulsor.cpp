#include "Propulsor.h"



Propulsor::Propulsor(int id, Nave * Spaceship) :Sala(id) 
{
	Spaceship->incrementa_propulsores();

}


Propulsor::~Propulsor()
{

}
