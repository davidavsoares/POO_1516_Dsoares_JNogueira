#pragma once
#include "Sala.h"
class Alojam_Capitao: public Sala
{
public:
	Alojam_Capitao(int id);
	~Alojam_Capitao();

	Alojam_Capitao(Sala & outro);
};

