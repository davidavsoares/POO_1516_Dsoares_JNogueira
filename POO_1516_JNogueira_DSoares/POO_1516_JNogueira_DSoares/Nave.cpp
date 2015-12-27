#include "Nave.h"



Nave::Nave(int x, int y, int tamanho)
{
	int i, sala = 1, k;
	Consola c;
	

	c.setTextSize(20,20);
	c.setScreenSize(55, 85);  // linhas colunas. valores grandes pode nao dar
	c.setBackgroundColor(c.PRETO);  // favor consultar o .h para ver as constantes
	c.setTextColor(c.BRANCO_CLARO);
	c.clrscr();


	/*for (k = 0; k < 3; k++)
	{
		for (i = 0; i < 4; i++)
		{
			if (k < 1)
			{
				Quadrado(x + i * tamanho, y + k * tamanho, c, sala);
			}
			else if( k == 1)
				Quadrado(x + (i+1) * tamanho, y + k * tamanho / 2, c, sala);
			else
				Quadrado(x + i * tamanho, y + k * tamanho / 2, c, sala);
			sala++;
		}
	}*/

	//Quadrado(x, y, c, 1);
	//Quadrado(x + tamanho, y, c, 2);
	//Quadrado(x + 2 * tamanho, y, c, 3);
	//Quadrado(x + 3 * tamanho, y, c, 4);
	//Quadrado(x + tamanho, y + tamanho/2, c, 5);
	//Quadrado(x + 2 * tamanho, y + tamanho / 2, c, 6);
	//Quadrado(x + 3 * tamanho, y + tamanho / 2, c, 7);
	//Quadrado(x + 4 * tamanho, y + tamanho / 2, c, 8);
	//Quadrado(x, y + 2 * tamanho / 2, c, 9);
	//Quadrado(x +  tamanho, y + 2 * tamanho / 2, c, 10);
	//Quadrado(x + 2 * tamanho, y + 2 * tamanho / 2, c, 11);
	//Quadrado(x + 3 * tamanho, y + 2 * tamanho / 2, c, 12);

	//Quadrado(x, y, c, 1);
	//Quadrado(x + tamanho, y, c, 2);
	//Quadrado(x + 2 * tamanho, y, c, 3);
	//Quadrado(x + 3 * tamanho, y, c, 4);
	//Quadrado(x + tamanho, y + tamanho, c, 5);
	//Quadrado(x + 2 * tamanho, y + tamanho, c, 6);
	//Quadrado(x + 3 * tamanho, y + tamanho, c, 7);
	//Quadrado(x + 4 * tamanho, y + tamanho, c, 8);
	//Quadrado(x, y + 2 * tamanho, c, 9);
	//Quadrado(x + tamanho, y + 2 * tamanho / 2, c, 10);
	//Quadrado(x + 2 * tamanho, y + 2 * tamanho, c, 11);
	//Quadrado(x + 3 * tamanho, y + 2 * tamanho, c, 12);


	for (k = 0; k < 3; k++)
	{
		for (i = 0; i < 4; i++)
		{
			if (k != 1)
			{
				Quadrado(x + i * tamanho, y + k * tamanho/2, c, sala, tamanho);
			}
			else 
				Quadrado(x + (i + 1) * tamanho, y + k * tamanho/2, c, sala, tamanho);
			sala++;
		}
	}
}


Nave::~Nave()
{
	salas.clear();
}


void Nave::Quadrado(int x,int y, Consola c, int sala,int tamanho) // CASO SEJA NECESSÀRIO: pode se criar a classe Sala que cria um quadrado, havendo um vector de salas na NAVE!
{
	//Consola c;  //passar por referencia, o prof so quer um por programa

	int tamx = tamanho, tamy = tamanho/2;
	
	int i = 0;

	if (sala == 1 || sala == 9)
	{
		c.gotoxy(x, y);	//Superior esquerdo
		cout << (char)201 << '\n';

		c.gotoxy(x, y + tamy);	//Inferior esquerdo
		cout << (char)200 << '\n';
	}
	else if (sala == 10)
	{
		c.gotoxy(x, y);	//Superior esquerdo
		cout << (char)206 << '\n';
	}
	if (sala == 4 || sala == 8)
	{
		c.gotoxy(x + tamx, y);	//Superior direito
		cout << (char)187 << '\n';
	}
	if (sala == 8 || sala == 12)
	{
		c.gotoxy(x + tamx, y + tamy);	//Inferior direito
		cout << (char)188 << '\n';
	}
	if (sala == 1 || sala == 2 || sala == 3)
	{
		c.gotoxy(x + tamx, y);	//Superior direito
		cout << (char)203 << '\n';
	}
	if (sala == 9 || sala == 10 || sala == 11)
	{
		c.gotoxy(x + tamx, y + tamy);	//Inferior direito
		cout << (char)202 << '\n';
	}
	if (sala == 1 || sala == 2 || sala == 3 || sala == 4 || sala == 5 || sala == 6 || sala == 7)
	{
		c.gotoxy(x + tamx, y + tamy);	//Inferior direito
		cout << (char)206 << '\n';
	}


	for (i = 1; i < tamy; i++)
	{

		c.gotoxy(x, y + i);			//Preenche a lateral esquerda
		cout << (char)186 << '\n';  //de um quadrado

		c.gotoxy(x + tamx, y + i);	//Preenche a lateral direita
		cout << (char)186 << '\n';		//de um quadrado
	}
	for (i = 1; i < tamx; i++)
	{
		c.gotoxy(x + i, y);				//Preenche o limite superior
		cout << (char)205 << '\n';		//de um quadrado

		c.gotoxy(x + i, y + tamy);		//Preenche o limite inferior
		cout << (char)205 << '\n';		//de um quadrado
	}

	cout << endl << endl;
}

//void Nave::Quadrado(int x, int y, Consola c, int sala)
//{
//	//Consola c;  //passar por referencia, o prof so quer um por programa
//
//	int tamx = tamanho / 2;
//
//	int i = 0;
//
//	if (sala == 1 || sala == 9)
//	{
//		c.gotoxy(x, y);	//Superior esquerdo
//		cout << (char)201 << '\n';
//
//		c.gotoxy(x, y + tam);	//Inferior esquerdo
//		cout << (char)200 << '\n';
//	}
//	else if (sala == 10)
//	{
//		c.gotoxy(x, y);	//Superior esquerdo
//		cout << (char)206 << '\n';
//	}
//	if (sala == 4 || sala == 8)
//	{
//		c.gotoxy(x + 2 * tam, y);	//Superior direito
//		cout << (char)187 << '\n';
//	}
//	if (sala == 8 || sala == 12)
//	{
//		c.gotoxy(x + 2 * tam, y + tam);	//Inferior direito
//		cout << (char)188 << '\n';
//	}
//	if (sala == 1 || sala == 2 || sala == 3)
//	{
//		c.gotoxy(x + 2 * tam, y);	//Superior direito
//		cout << (char)203 << '\n';
//	}
//	if (sala == 9 || sala == 10 || sala == 11)
//	{
//		c.gotoxy(x + 2 * tam, y + tam);	//Inferior direito
//		cout << (char)202 << '\n';
//	}
//	if (sala == 1 || sala == 2 || sala == 3 || sala == 4 || sala == 5 || sala == 6 || sala == 7)
//	{
//		c.gotoxy(x + 2 * tam, y + tam);	//Inferior direito
//		cout << (char)206 << '\n';
//	}
//
//	//c.gotoxy(x, y);	//Superior esquerdo
//	//cout << (char)201 << '\n';
//
//	//c.gotoxy(x, y + tam);	//Inferior esquerdo
//	//cout << (char)200 << '\n';
//
//	//c.gotoxy(x + 2 * tam, y);	//Superior direito
//	//cout << (char)206 << '\n';
//
//	//c.gotoxy(x + 2 * tam, y + tam);	//Inferior direito
//	//cout << (char)206 << '\n';
//
//
//	for (i = 1; i < tam; i++)
//	{
//
//		c.gotoxy(x, y + i);			//Preenche a lateral esquerda
//		cout << (char)186 << '\n';  //de um quadrado
//
//									//if (sala == 4 || sala == 8 || sala == 12)
//									//{
//									//	c.gotoxy(x + 2 * tam, y + i);	//Preenche a lateral direita
//									//	cout << (char)186 << '\n';		//de um quadrado
//									//}
//
//		c.gotoxy(x + 2 * tam, y + i);	//Preenche a lateral direita
//		cout << (char)186 << '\n';		//de um quadrado
//	}
//	for (i = 1; i < 2 * tam; i++)
//	{
//		c.gotoxy(x + i, y);				//Preenche o limite superior
//		cout << (char)205 << '\n';		//de um quadrado
//
//										//if (sala == 1 || sala == 8 || sala == 9 || sala == 10 || sala == 11 || sala == 12)
//										//{
//										//	c.gotoxy(x + i, y + tam);		//Preenche o limite inferior
//										//	cout << (char)205 << '\n';		//de um quadrado
//										//}
//
//		c.gotoxy(x + i, y + tam);		//Preenche o limite inferior
//		cout << (char)205 << '\n';		//de um quadrado
//	}
//
//	//// lateral esquerda
//	//c.gotoxy(x, y);
//	//cout << (char)201 << '\n';
//	//c.gotoxy(x, y + 1);
//	//cout << (char)186 << '\n';
//	//c.gotoxy(x, y + 2);
//	//cout << (char)186 << '\n';
//	//c.gotoxy(x, y + 3);
//	//cout << (char)186 << '\n';
//	//c.gotoxy(x, y + 4);
//	//cout << (char)186 << '\n';
//	//c.gotoxy(x, y + 5);
//	//cout << (char)200 << '\n';
//
//	//// lateral direita
//	//c.gotoxy(x + konst, y);
//	//cout << (char)203 << '\n';
//	//c.gotoxy(x + konst, y + 1);
//	//cout << (char)186 << '\n';
//	//c.gotoxy(x + konst, y + 2);
//	//cout << (char)186 << '\n';
//	//c.gotoxy(x + konst, y + 3);
//	//cout << (char)186 << '\n';
//	//c.gotoxy(x + konst, y + 4);
//	//cout << (char)186 << '\n';
//	//c.gotoxy(x + konst, y + 5);
//	//cout << (char)202 << '\n';
//
//	//// Limite superior
//
//	//c.gotoxy(9, 7);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(10, 7);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(11, 7);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(12, 7);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(13, 7);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(14, 7);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(15, 7);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(16, 7);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(17, 7);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(18, 7);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(19, 7);
//	//cout << (char)205 << '\n';
//
//	//// Limite inferior
//
//	//c.gotoxy(9, 12);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(10, 12);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(11, 12);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(12, 12);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(13, 12);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(14, 12);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(15, 12);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(16, 12);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(17, 12);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(18, 12);
//	//cout << (char)205 << '\n';
//	//c.gotoxy(19, 12);
//	//cout << (char)205 << '\n';
//
//
//	cout << endl << endl;
//}

void Nave::adiciona(Sala *p)
{
	this->salas.push_back(p);
}

string Nave::toString() const
{
	ostringstream oss;
	
	for (unsigned int i = 0; i < salas.size(); i++)
	oss << " Integridade: " << salas[i] -> getIntegridade() << endl << " Saude : " << salas[i] -> getSaude() << endl << " Oxigenio : " << salas[i] -> getOxigenio() << endl;
	return oss.str();
}