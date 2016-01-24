#pragma once
#include "Sala.h"
class Beliche: public Sala
{
public:
	Beliche(int id);
	~Beliche();

	Beliche(Sala & outro);
};

