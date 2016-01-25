#pragma once
#include "Tripulacao.h"
class Capitao :
	public Tripulacao

{
public:
	Capitao();
	~Capitao();
	Capitao(Unidade & outro);
};

