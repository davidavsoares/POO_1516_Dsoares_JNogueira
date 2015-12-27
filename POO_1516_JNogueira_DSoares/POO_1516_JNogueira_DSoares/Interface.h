#pragma once
#include "bibliotecas.h"

class Interface
{
	int cor_menu;
	int cor_texto;
	int fundo;
	int header;
public:
	Interface();
	~Interface();

	void inicia();
	void desenha_menu();
	void creditos();
	void sair();
	void goodbye();
};