#pragma once
#include "Sala.h"
class Sistema_Seguranca: public Sala
{
public:
	Sistema_Seguranca(int id);
	~Sistema_Seguranca();

	Sistema_Seguranca(Sala & outro);
};

