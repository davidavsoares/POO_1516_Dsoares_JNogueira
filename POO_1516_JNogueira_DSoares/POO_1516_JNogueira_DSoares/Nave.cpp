#include "Nave.h"



Nave::Nave(int x, int y)
{
	Consola c;
	

	c.setTextSize(20, 20);
	c.setScreenSize(45, 45);  // linhas colunas. valores grandes pode nao dar
	c.setBackgroundColor(c.AZUL);  // favor consultar o .h para ver as constantes
	c.setTextColor(c.AMARELO_CLARO);

	Quadrado(x, y, c, 1);
	Quadrado(x + 2 * tamanho, y, c, 2);

}


Nave::~Nave()
{
}


void Nave::Quadrado(int x,int y, Consola c, int sala)
{
	//Consola c;  //passar por referencia, o prof so quer um por programa

	int tam = tamanho;
	
	int i = 0;
	if (sala == 1 || sala == 5 || sala == 8)
	{
		c.gotoxy(x, y);
		cout << (char)201 << '\n';

		c.gotoxy(x + 2 * tam, y);
		cout << (char)203 << '\n';

		c.gotoxy(x, y + tam);
		cout << (char)200 << '\n';

		c.gotoxy(x + 2 * tam, y + tam);
		cout << (char)202 << '\n';
	}

	else if( sala == 4 || sala == 7 || sala == 11)
	{
		c.gotoxy(x, y);
		cout << (char)201 << '\n';

		c.gotoxy(x + 2 * tam, y);
		cout << (char)203 << '\n';

		c.gotoxy(x, y + tam);
		cout << (char)200 << '\n';

		c.gotoxy(x + 2 * tam, y + tam);
		cout << (char)202 << '\n';
	}

	else if (sala == 2 || sala == 3 || sala == 6 || sala == 9 || sala == 10)
	{
		c.gotoxy(x, y);
		cout << (char)201 << '\n';

		c.gotoxy(x + 2 * tam, y);
		cout << (char)203 << '\n';

		c.gotoxy(x, y + tam);
		cout << (char)200 << '\n';

		c.gotoxy(x + 2 * tam, y + tam);
		cout << (char)202 << '\n';
	}
	for (i = 1; i < tam; i++)
	{

		c.gotoxy(x, y + i);			//Preenche a lateral esquerda
		cout << (char)186 << '\n';  //de um quadrado

		c.gotoxy(x + 2 * tam, y + i);	//Preenche a lateral direita
		cout << (char)186 << '\n';		//de um quadrado
	}
	for (i = 1; i < 2 * tam; i++)
	{
		c.gotoxy(x + i, y);				//Preenche o limite superior
		cout << (char)205 << '\n';		//de um quadrado

		c.gotoxy(x + i, y + tam);		//Preenche o limite superior
		cout << (char)205 << '\n';		//de um quadrado
	}

		//// lateral esquerda
		//c.gotoxy(x, y);
		//cout << (char)201 << '\n';
		//c.gotoxy(x, y + 1);
		//cout << (char)186 << '\n';
		//c.gotoxy(x, y + 2);
		//cout << (char)186 << '\n';
		//c.gotoxy(x, y + 3);
		//cout << (char)186 << '\n';
		//c.gotoxy(x, y + 4);
		//cout << (char)186 << '\n';
		//c.gotoxy(x, y + 5);
		//cout << (char)200 << '\n';

		//// lateral direita
		//c.gotoxy(x + konst, y);
		//cout << (char)203 << '\n';
		//c.gotoxy(x + konst, y + 1);
		//cout << (char)186 << '\n';
		//c.gotoxy(x + konst, y + 2);
		//cout << (char)186 << '\n';
		//c.gotoxy(x + konst, y + 3);
		//cout << (char)186 << '\n';
		//c.gotoxy(x + konst, y + 4);
		//cout << (char)186 << '\n';
		//c.gotoxy(x + konst, y + 5);
		//cout << (char)202 << '\n';

		//// Limite superior

		//c.gotoxy(9, 7);
		//cout << (char)205 << '\n';
		//c.gotoxy(10, 7);
		//cout << (char)205 << '\n';
		//c.gotoxy(11, 7);
		//cout << (char)205 << '\n';
		//c.gotoxy(12, 7);
		//cout << (char)205 << '\n';
		//c.gotoxy(13, 7);
		//cout << (char)205 << '\n';
		//c.gotoxy(14, 7);
		//cout << (char)205 << '\n';
		//c.gotoxy(15, 7);
		//cout << (char)205 << '\n';
		//c.gotoxy(16, 7);
		//cout << (char)205 << '\n';
		//c.gotoxy(17, 7);
		//cout << (char)205 << '\n';
		//c.gotoxy(18, 7);
		//cout << (char)205 << '\n';
		//c.gotoxy(19, 7);
		//cout << (char)205 << '\n';

		//// Limite inferior

		//c.gotoxy(9, 12);
		//cout << (char)205 << '\n';
		//c.gotoxy(10, 12);
		//cout << (char)205 << '\n';
		//c.gotoxy(11, 12);
		//cout << (char)205 << '\n';
		//c.gotoxy(12, 12);
		//cout << (char)205 << '\n';
		//c.gotoxy(13, 12);
		//cout << (char)205 << '\n';
		//c.gotoxy(14, 12);
		//cout << (char)205 << '\n';
		//c.gotoxy(15, 12);
		//cout << (char)205 << '\n';
		//c.gotoxy(16, 12);
		//cout << (char)205 << '\n';
		//c.gotoxy(17, 12);
		//cout << (char)205 << '\n';
		//c.gotoxy(18, 12);
		//cout << (char)205 << '\n';
		//c.gotoxy(19, 12);
		//cout << (char)205 << '\n';
	

	cout << endl << endl;
}
