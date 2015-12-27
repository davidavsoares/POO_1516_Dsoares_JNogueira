#pragma once
#include "bibliotecas.h"
#include "Nave.h"

class Nave;
class Sala
{
	int oxigenio, integridade, saude, id;
public:
	Sala(int id);
	~Sala();
	string toString()const;
	int getSaude();					// Saude == Integridade?????
	int getOxigenio();
	int getIntegridade();
	int getId();
};

