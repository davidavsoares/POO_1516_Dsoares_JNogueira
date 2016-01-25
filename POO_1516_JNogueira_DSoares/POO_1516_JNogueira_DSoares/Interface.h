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
	void sair(string x);
	void goodbye();

	int move(int opcao, int n_opcoes, int nula_1, int nula_2);

	void inicial(Consola *c);

	void Salas(Consola *c, int dif);
	void Selec_Dificuldade(Consola *c);

	/*void NextDesign(Nave & Spaceship, Consola *c);*/

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
