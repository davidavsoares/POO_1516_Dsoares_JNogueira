#pragma once

#include "Interface.h"



class comandos
{
	int linhas;
	int colunas;
public:
	comandos();
	~comandos();
	void cmd(Nave &Spaceship);
	void analisa_comandos(string b, Nave &Spaceship);
	void inicio_turno(Nave & Spaceship);
	void fim_turno(Nave & Spaceship);
};