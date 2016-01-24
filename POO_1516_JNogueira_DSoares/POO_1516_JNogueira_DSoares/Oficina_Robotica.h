#pragma once
#include "Sala.h"
class Oficina_Robotica: public Sala
{
public:
	Oficina_Robotica(int id);
	~Oficina_Robotica();

	Oficina_Robotica(Sala & outro);
};

