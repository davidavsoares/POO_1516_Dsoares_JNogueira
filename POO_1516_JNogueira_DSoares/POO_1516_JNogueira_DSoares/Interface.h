#pragma once
#include "bibliotecas.h"
#include "consola.h"
#include "Nave.h"

class Interface
{
	int cor_menu;
	int cor_texto;
	int fundo;
	int header;
	int contador = 0;
	bool flag = false;
public:
	Interface();
	~Interface();

	void desenha_menu();
	void creditos();
	void sair();
	void goodbye();

	int move(int opcao, int n_opcoes);

	void inicial(Consola *c);

	void Salas(Consola *c);

	void NextDesign(Nave & Spaceship, Consola *c);

	//////////////FUNCAO PROVISORIA/////////////////////77
	int NI(Consola *c, int contador)
	{
		c->clrscr();
		c->gotoxy(45, 8);
		cout << "Funcionalidade ainda nao implementada!";
		Sleep(1000);
		return contador--;
	};


};
