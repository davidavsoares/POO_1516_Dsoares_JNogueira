#pragma once
#include "Sala.h"
#include "Nave.h"

class Propulsor : 
	public Sala
{
	
public:
	Propulsor(int id, Nave *Spaceship);
	~Propulsor();
};

