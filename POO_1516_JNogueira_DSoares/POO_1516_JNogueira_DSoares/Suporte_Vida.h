#pragma once
#include "Sala.h"

class Suporte_Vida : public Sala
{
public:
	Suporte_Vida(int id);
	~Suporte_Vida();

	Suporte_Vida(Sala & outro);
};

