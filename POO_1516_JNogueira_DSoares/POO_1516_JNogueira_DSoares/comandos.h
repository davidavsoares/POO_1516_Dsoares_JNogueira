#pragma once

#include "Interface.h"



class comandos
{
	int linhas;
	int colunas;
public:
	comandos();
	~comandos();
	void cmd();
	void analisa_comandos(string b);
	//void analisa_comandos1(string comando,territorio *a);
	//void desenha_mapa(territorio *a);
	//void carrega_ficheiro(string nome);
};