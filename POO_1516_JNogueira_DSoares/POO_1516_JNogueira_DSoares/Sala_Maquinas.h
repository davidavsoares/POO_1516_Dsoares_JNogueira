#pragma once
#include "Sala.h"

class Sala_Maquinas : public Sala
{
public:
	Sala_Maquinas(int id);
	~Sala_Maquinas();

	Sala_Maquinas(Sala & outro);
};

