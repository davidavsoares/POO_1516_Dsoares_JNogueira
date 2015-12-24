#include "Nave.h"



Nave::Nave()
{

	Consola c;


	c.setTextSize(20, 20);
	c.setScreenSize(45, 45);  // linhas colunas. valores grandes pode nao dar
	c.setBackgroundColor(c.AZUL);  // favor consultar o .h para ver as constantes
	c.setTextColor(c.AMARELO_CLARO);

	// lateral esquerda
	c.gotoxy(8, 7);
	cout << (char)201 << '\n';
	c.gotoxy(8, 8);
	cout << (char)186 << '\n';
	c.gotoxy(8, 9);
	cout << (char)186 << '\n';
	c.gotoxy(8, 10);
	cout << (char)186 << '\n';
	c.gotoxy(8, 11);
	cout << (char)186 << '\n';
	c.gotoxy(8, 12);
	cout << (char)200 << '\n';

	// lateral direita
	c.gotoxy(20, 7);
	cout << (char)203 << '\n';
	c.gotoxy(20, 8);
	cout << (char)186 << '\n';
	c.gotoxy(20, 9);
	cout << (char)186 << '\n';
	c.gotoxy(20, 10);
	cout << (char)186 << '\n';
	c.gotoxy(20, 11);
	cout << (char)186 << '\n';
	c.gotoxy(20, 12);
	cout << (char)202 << '\n';

	// Limite superior

	c.gotoxy(9, 7);
	cout << (char)205 << '\n';
	c.gotoxy(10, 7);
	cout << (char)205 << '\n';
	c.gotoxy(11, 7);
	cout << (char)205 << '\n';
	c.gotoxy(12, 7);
	cout << (char)205 << '\n';
	c.gotoxy(13, 7);
	cout << (char)205 << '\n';
	c.gotoxy(14, 7);
	cout << (char)205 << '\n';
	c.gotoxy(15, 7);
	cout << (char)205 << '\n';
	c.gotoxy(16, 7);
	cout << (char)205 << '\n';
	c.gotoxy(17, 7);
	cout << (char)205 << '\n';
	c.gotoxy(18, 7);
	cout << (char)205 << '\n';
	c.gotoxy(19, 7);
	cout << (char)205 << '\n';

	// Limite inferior

	c.gotoxy(9, 12);
	cout << (char)205 << '\n';
	c.gotoxy(10, 12);
	cout << (char)205 << '\n';
	c.gotoxy(11, 12);
	cout << (char)205 << '\n';
	c.gotoxy(12, 12);
	cout << (char)205 << '\n';
	c.gotoxy(13, 12);
	cout << (char)205 << '\n';
	c.gotoxy(14, 12);
	cout << (char)205 << '\n';
	c.gotoxy(15, 12);
	cout << (char)205 << '\n';
	c.gotoxy(16, 12);
	cout << (char)205 << '\n';
	c.gotoxy(17, 12);
	cout << (char)205 << '\n';
	c.gotoxy(18, 12);
	cout << (char)205 << '\n';
	c.gotoxy(19, 12);
	cout << (char)205 << '\n';

}


Nave::~Nave()
{
}
