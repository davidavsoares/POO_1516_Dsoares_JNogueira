#pragma once
#include "Sala.h"
class Enfermaria: public Sala
{
public:
	Enfermaria(int id);
	~Enfermaria();

	Enfermaria(Sala & outro);
};

