#pragma once
#include "Sala.h"
class Auto_Reparador: public Sala
{
public:
	Auto_Reparador(int id);
	~Auto_Reparador();
	Auto_Reparador(Sala & outro);
};

