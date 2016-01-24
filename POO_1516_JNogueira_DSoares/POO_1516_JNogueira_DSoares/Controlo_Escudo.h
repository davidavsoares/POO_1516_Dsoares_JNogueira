#pragma once
#include "Sala.h"

class Controlo_Escudo: public Sala
{
public:
	Controlo_Escudo(int id);
	~Controlo_Escudo();

	Controlo_Escudo(Sala & outro);
};

