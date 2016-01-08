#include "Interface.h"
#include "comandos.h"


Interface::Interface()		//Configura a consola
{
	Consola c;


	c.setTextSize(20, 20);
	c.setScreenSize(55, 85);
	fundo = c.PRETO;
	header = c.PRETO;
	cor_texto = c.BRANCO_CLARO;
	cor_menu = c.BRANCO_CLARO;
	c.setBackgroundColor(fundo);
	c.setTextColor(cor_texto);
	c.clrscr();


}

Interface::~Interface()
{
}

void Interface::desenha_menu()		//Configura o menu que é apresentado inicialmente
{
	Consola c;
	int x = 15, y = 5, coord_x = 60, coord_y = 6, i, j;
	int opcao = 1;
	contador++;


	for (i = y; i < (y + coord_y); i++)
	{
		for (j = x; j < (x + coord_x); j++)
		{
			c.gotoxy(j, i);
			c.setBackgroundColor(header);
		}
		cout << endl;
	}
	
	if(contador == 1)
		inicial(&c);
	if (contador == 2)
		Salas(&c);


}

void Interface::creditos()		//Apresenta os creditos
{
	Consola c;
	
	c.clrscr();
	c.gotoxy(45,8);
	cout << "Have you made it untill the end? "<<endl;
	c.gotoxy(53, 10);
	cout << "At least TRY!" << endl;
	c.gotoxy(50,15);
	cout << "Fallout Shelter ft FTL"<<endl<<endl<<endl;
	c.gotoxy(60, 35);
	cout << "Copyright 2015, David Soares && Jorge Nogueira" << endl << endl;

	Sleep(6000);
	c.clrscr();
	inicial(&c);
}

void Interface::sair()
{
	Consola c;
	
	c.clrscr();


	goodbye();
	//c.gotoxy(60, 20);
	//cout << "Obrigado por ter jogado" << endl << endl;

	c.gotoxy(60, 35);
	cout << "Copyright 2015, David Soares && Jorge Nogueira" << endl << endl;

	Sleep(3000);
	exit(0);
}

void Interface::goodbye()
{
	Consola c;
	c.clrscr();
	c.setTextSize(20, 20);
	/////////////////////PRINT G/////////////////
	int i, xx = 35, yy = 8, x, y;
	x = xx;
	y = yy;

	for (i = 0; i < 8; i++)
	{
		c.gotoxy(x + i, y);
		cout << (char)186 << '\n';
	}

	for (i = 0; i < 7; i++)
	{
		c.gotoxy(x, y+i);
		cout << (char)186 << '\n';
		c.gotoxy(x-1, y + i);
		cout << (char)186 << '\n';
	}

	y = y + i - 1;
	for (int i = 0; i < 7; i++)
	{
		c.gotoxy(x + i, y);
		cout << (char)186 << '\n';
	}
	x = x + i;
	for (i = 0; i < 2; i++)
	{
		c.gotoxy(x, y - i);
		cout << (char)186 << '\n';
		c.gotoxy(x - 1, y - i);
		cout << (char)186 << '\n';

	}

	y = y - i;
	for (i = 0; i < 5; i++)
	{
		c.gotoxy(x - i, y);
		cout << (char)186 << '\n';
	}

	//////////////// PRINT O////////////////
	x = xx + 10, y = yy;
	for (i = 0; i < 8; i++)
	{
		c.gotoxy(x + i, y);
		cout << (char)186 << '\n';

		c.gotoxy(x + i, y + 6);
		cout << (char)186 << '\n';


	}
	for (i = 0; i < 7; i++)
	{
		c.gotoxy(x, y + i);
		cout << (char)186 << '\n';
		c.gotoxy(x - 1, y + i);
		cout << (char)186 << '\n';

		c.gotoxy(x + 7, y + i);
		cout << (char)186 << '\n';
		c.gotoxy(x - 1 + 7, y + i);
		cout << (char)186 << '\n';
	}
	///////////////PRINT O ////////////////////
	x = xx + 20, y = yy;
	for (i = 0; i < 8; i++)
	{
		c.gotoxy(x + i, y);
		cout << (char)186 << '\n';

		c.gotoxy(x + i, y + 6);
		cout << (char)186 << '\n';


	}
	for (i = 0; i < 7; i++)
	{
		c.gotoxy(x, y + i);
		cout << (char)186 << '\n';
		c.gotoxy(x - 1, y + i);
		cout << (char)186 << '\n';

		c.gotoxy(x + 7, y + i);
		cout << (char)186 << '\n';
		c.gotoxy(x - 1 + 7, y + i);
		cout << (char)186 << '\n';
	}

	//////////////PRINT D///////////////////////////

	x = xx + 30, y = yy;
	for (i = 0; i < 7; i++)
	{
		c.gotoxy(x, y + i);
		cout << (char)186 << '\n';
		c.gotoxy(x - 1, y + i);
		cout << (char)186 << '\n';
	}

	c.gotoxy(x + 1, y);
	cout << (char)186 << '\n';
	c.gotoxy(x + 2, y);
	cout << (char)186 << '\n';
	c.gotoxy(x + 3, y);
	cout << (char)186 << '\n';
	c.gotoxy(x + 3, y + 1);
	cout << (char)186 << '\n';
	c.gotoxy(x + 4, y + 1);
	cout << (char)186 << '\n';
	c.gotoxy(x + 5, y + 1);
	cout << (char)186 << '\n';
	c.gotoxy(x + 5, y + 2);
	cout << (char)186 << '\n';
	c.gotoxy(x + 6, y + 2);
	cout << (char)186 << '\n';
	c.gotoxy(x + 5, y + 3);
	cout << (char)186 << '\n';
	c.gotoxy(x + 6, y + 3);
	cout << (char)186 << '\n';

	c.gotoxy(x + 7, y + 3);
	cout << (char)186 << '\n';


	y = y + 6;
	c.gotoxy(x + 1, y);
	cout << (char)186 << '\n';
	c.gotoxy(x + 2, y);
	cout << (char)186 << '\n';
	c.gotoxy(x + 3, y);
	cout << (char)186 << '\n';
	c.gotoxy(x + 3, y - 1);
	cout << (char)186 << '\n';
	c.gotoxy(x + 4, y - 1);
	cout << (char)186 << '\n';
	c.gotoxy(x + 5, y - 1);
	cout << (char)186 << '\n';
	c.gotoxy(x + 5, y - 2);
	cout << (char)186 << '\n';
	c.gotoxy(x + 6, y - 2);
	cout << (char)186 << '\n';
	c.gotoxy(x + 7, y - 2);




	/////////////PRINT B////////////////

	x = xx + 45, y = yy;
	for (i = 0; i < 7; i++)
	{
		c.gotoxy(x, y + i);
		cout << (char)186 << '\n';
		c.gotoxy(x - 1, y + i);
		cout << (char)186 << '\n';
	}

	c.gotoxy(x + 1, y);
	cout << (char)186 << '\n';
	c.gotoxy(x + 2, y);
	cout << (char)186 << '\n';
	c.gotoxy(x + 3, y);
	cout << (char)186 << '\n';
	c.gotoxy(x + 3, y + 1);
	cout << (char)186 << '\n';
	c.gotoxy(x + 4, y + 1);
	cout << (char)186 << '\n';
	c.gotoxy(x + 5, y + 1);
	cout << (char)186 << '\n';
	c.gotoxy(x + 5, y + 2);
	cout << (char)186 << '\n';
	c.gotoxy(x + 6, y + 2);
	cout << (char)186 << '\n';


	c.gotoxy(x + 4, y + 3);
	cout << (char)186 << '\n';

	y = y + 6;
	c.gotoxy(x + 1, y);
	cout << (char)186 << '\n';
	c.gotoxy(x + 2, y);
	cout << (char)186 << '\n';
	c.gotoxy(x + 3, y);
	cout << (char)186 << '\n';
	c.gotoxy(x + 3, y - 1);
	cout << (char)186 << '\n';
	c.gotoxy(x + 4, y - 1);
	cout << (char)186 << '\n';
	c.gotoxy(x + 5, y - 1);
	cout << (char)186 << '\n';
	c.gotoxy(x + 5, y - 2);
	cout << (char)186 << '\n';
	c.gotoxy(x + 6, y - 2);
	cout << (char)186 << '\n';
	c.gotoxy(x + 7, y - 2);

	
	



	//////////////////PRINT Y////////////////////////////

	x = xx + 58, y = yy;
	for (i = 6; i > 3; i--)
	{
		c.gotoxy(x, y + i);
		cout << (char)186 << '\n';
		c.gotoxy(x - 1, y + i);
		cout << (char)186 << '\n';
	}
	x = xx + 55, y = yy + 1;
	c.gotoxy(x - 1, y - 1);
	cout << (char)186 << '\n';
	for (i = 0; i < 3; i++)
	{
		c.gotoxy(x + i, y + i);
		cout << (char)186 << '\n';
		c.gotoxy(x - 1 + i, y + i);
		cout << (char)186 << '\n';

	}
	x = xx + 61;
	c.gotoxy(x, y -1);
	cout << (char)186 << '\n';

	for (i = 0; i < 3; i++)
	{
		c.gotoxy(x - i, y + i);
		cout << (char)186 << '\n';
		c.gotoxy(x - 1 - i, y + i);
		cout << (char)186 << '\n';

	}


	/////////////////PRINT E///////////////////

	x = xx + 65, y = yy;
	for (i = 0; i < 7; i++)
	{
		c.gotoxy(x, y + i);
		cout << (char)186 << '\n';
		c.gotoxy(x - 1, y + i);
		cout << (char)186 << '\n';
	}

	for (i = 1; i < 7; i++)
	{
		c.gotoxy(x + i, y);
		cout << (char)186 << '\n';

		c.gotoxy(x + i, y + 6);
		cout << (char)186 << '\n';

		c.gotoxy(x + i, y + 3);
		cout << (char)186 << '\n';
	
	}





}

int Interface::move(int opcao, int n_opcoes)
{
	Consola c;
	int tecla = 0;

	
	do
	{
		tecla = c.getch();
	} while (tecla != c.CIMA && tecla != c.BAIXO && tecla != c.ENTER);

	if (tecla == c.CIMA)
	{
		opcao--;
		if (opcao == 0)
			opcao = n_opcoes;
	}
	if (tecla == c.BAIXO)
	{
		opcao++;
		if (opcao == n_opcoes + 1)
			opcao = 1;
	}
	if (tecla == c.ENTER)
		flag = true;

	return opcao;

}

void Interface::inicial(Consola *c)		//Apresenta o menu inicial 
{
	flag = false;

	int opcao = 1, menu_x = 50, menu_y = 15, n_opcoes = 3;

	do
	{
		opcao = move(opcao, n_opcoes);

		if (opcao == 1)
		{
			c->clrscr();
			c->gotoxy(45, 8);
			cout << "Fallout Shelter ft FTL";
			c->gotoxy(menu_x, menu_y);
			c->setBackgroundColor(fundo);
			cout << ">Preparar Viagem";
			c->gotoxy(menu_x, menu_y + 3);
			cout << "Creditos";
			c->gotoxy(menu_x, menu_y + 6);
			cout << "Sair";
		}
		if (opcao == 2)
		{
			c->clrscr();
			c->gotoxy(45, 8);
			cout << "Fallout Shelter ft FTL";
			c->gotoxy(menu_x, menu_y);
			cout << "Preparar Viagem";
			c->gotoxy(menu_x, menu_y + 3);
			cout << ">Creditos";
			c->gotoxy(menu_x, menu_y + 6);
			cout << "Sair";
		}
		if (opcao == 3)
		{
			c->clrscr();
			c->gotoxy(45, 8);
			cout << "Fallout Shelter ft FTL";
			c->gotoxy(menu_x, menu_y);
			cout << "Preparar Viagem";
			c->gotoxy(menu_x, menu_y + 3);
			cout << "Creditos";
			c->gotoxy(menu_x, menu_y + 6);
			cout << ">Sair";
		}
	} while (!flag);  //Faz um ciclo de 'if' para escolher o valor de opcao

	switch (opcao)
	{
	case 1: //Nave(8, 7, 14);
		Salas(c);
		break;
	case 2:creditos();
		break;
	case 3:sair();
		break;
	default:
		break;
	}
}

void Interface::Salas(Consola *c)		//Desenha e configura o menu  que é apresentado antes do desenho da nave
{
	

	int opcao = 1, menu_x = 50, menu_y = 15;
	comandos ABC;
	Nave Spaceship;	// Cria uma Nave com as caracteristicas (Posicao XX, Posicao YY, Tamanho)
					//cmd.cmd();
	Sala *p1;


	for (int i = 1; i <= 12; i++)
	{
		///////////////Adiciona as salas obrigatórias ao vector nave//////////////////
		if (i == 1)
		{
			Spaceship.adiciona(new Propulsor(i, &Spaceship));
		}
		else if(i == 5)
		{
			Spaceship.adiciona(new Sala_Maquinas(i));
		}
		else if (i == 6)
		{
			Spaceship.adiciona(new Suporte_Vida(i));
		}
		else if (i == 7)
		{
			Spaceship.adiciona(new Controlo_Escudo(i));
		}
		else if (i == 8)
		{
			Spaceship.adiciona(new Ponte(i));
		}
		else if (i == 9)
		{
			Spaceship.adiciona(new Propulsor(i, &Spaceship));
		}
		else
		{
			flag = false;
			do
			{
				opcao = move(opcao, 10);
				/////////////////ADICIONA AS SALAS OPCIONAIS AO VECTOR NAVE/////////////////
				if (opcao == 1)
				{
					c->clrscr();
					c->gotoxy(45, 8);
					cout << "Escolha as suas salas:";
					c->gotoxy(menu_x, menu_y);
					c->setBackgroundColor(fundo);
					cout << ">Alojamento do capitao";
					c->gotoxy(menu_x, menu_y + 3);
					cout << "Auto-reparador";
					c->gotoxy(menu_x, menu_y + 6);
					cout << "Beliches";
					c->gotoxy(menu_x, menu_y + 9);
					cout << "Enfermaria";
					c->gotoxy(menu_x, menu_y + 12);
					cout << "Oficina de robotica";
					c->gotoxy(menu_x, menu_y + 15);
					cout << "Propulsores adicionais";
					c->gotoxy(menu_x, menu_y + 18);
					cout << "Raio laser";
					c->gotoxy(menu_x, menu_y + 21);
					cout << "Sala de armas";
					c->gotoxy(menu_x, menu_y + 24);
					cout << "Sistema de seguranca interno";
					c->gotoxy(menu_x, menu_y + 27);
					cout << "Sair";
				}
				if (opcao == 2)
				{
					c->clrscr();
					c->gotoxy(45, 8);
					cout << "Escolha as suas salas:";
					c->gotoxy(menu_x, menu_y);
					c->setBackgroundColor(fundo);
					cout << "Alojamento do capitao";
					c->gotoxy(menu_x, menu_y + 3);
					cout << ">Auto-reparador";
					c->gotoxy(menu_x, menu_y + 6);
					cout << "Beliches";
					c->gotoxy(menu_x, menu_y + 9);
					cout << "Enfermaria";
					c->gotoxy(menu_x, menu_y + 12);
					cout << "Oficina de robotica";
					c->gotoxy(menu_x, menu_y + 15);
					cout << "Propulsores adicionais";
					c->gotoxy(menu_x, menu_y + 18);
					cout << "Raio laser";
					c->gotoxy(menu_x, menu_y + 21);
					cout << "Sala de armas";
					c->gotoxy(menu_x, menu_y + 24);
					cout << "Sistema de seguranca interno";
					c->gotoxy(menu_x, menu_y + 27);
					cout << "Sair";
				}
				if (opcao == 3)
				{
					c->clrscr();
					c->gotoxy(45, 8);
					cout << "Escolha as suas salas:";
					c->gotoxy(menu_x, menu_y);
					c->setBackgroundColor(fundo);
					cout << "Alojamento do capitao";
					c->gotoxy(menu_x, menu_y + 3);
					cout << "Auto-reparador";
					c->gotoxy(menu_x, menu_y + 6);
					cout << ">Beliches";
					c->gotoxy(menu_x, menu_y + 9);
					cout << "Enfermaria";
					c->gotoxy(menu_x, menu_y + 12);
					cout << "Oficina de robotica";
					c->gotoxy(menu_x, menu_y + 15);
					cout << "Propulsores adicionais";
					c->gotoxy(menu_x, menu_y + 18);
					cout << "Raio laser";
					c->gotoxy(menu_x, menu_y + 21);
					cout << "Sala de armas";
					c->gotoxy(menu_x, menu_y + 24);
					cout << "Sistema de seguranca interno";
					c->gotoxy(menu_x, menu_y + 27);
					cout << "Sair";
				}
				if (opcao == 4)
				{
					c->clrscr();
					c->gotoxy(45, 8);
					cout << "Escolha as suas salas:";
					c->gotoxy(menu_x, menu_y);
					c->setBackgroundColor(fundo);
					cout << "Alojamento do capitao";
					c->gotoxy(menu_x, menu_y + 3);
					cout << "Auto-reparador";
					c->gotoxy(menu_x, menu_y + 6);
					cout << "Beliches";
					c->gotoxy(menu_x, menu_y + 9);
					cout << ">Enfermaria";
					c->gotoxy(menu_x, menu_y + 12);
					cout << "Oficina de robotica";
					c->gotoxy(menu_x, menu_y + 15);
					cout << "Propulsores adicionais";
					c->gotoxy(menu_x, menu_y + 18);
					cout << "Raio laser";
					c->gotoxy(menu_x, menu_y + 21);
					cout << "Sala de armas";
					c->gotoxy(menu_x, menu_y + 24);
					cout << "Sistema de seguranca interno";
					c->gotoxy(menu_x, menu_y + 27);
					cout << "Sair";
				}
				if (opcao == 5)
				{
					c->clrscr();
					c->gotoxy(45, 8);
					cout << "Escolha as suas salas:";
					c->gotoxy(menu_x, menu_y);
					c->setBackgroundColor(fundo);
					cout << "Alojamento do capitao";
					c->gotoxy(menu_x, menu_y + 3);
					cout << "Auto-reparador";
					c->gotoxy(menu_x, menu_y + 6);
					cout << "Beliches";
					c->gotoxy(menu_x, menu_y + 9);
					cout << "Enfermaria";
					c->gotoxy(menu_x, menu_y + 12);
					cout << ">Oficina de robotica";
					c->gotoxy(menu_x, menu_y + 15);
					cout << "Propulsores adicionais";
					c->gotoxy(menu_x, menu_y + 18);
					cout << "Raio laser";
					c->gotoxy(menu_x, menu_y + 21);
					cout << "Sala de armas";
					c->gotoxy(menu_x, menu_y + 24);
					cout << "Sistema de seguranca interno";
					c->gotoxy(menu_x, menu_y + 27);
					cout << "Sair";
				}
				if (opcao == 6)
				{
					c->clrscr();
					c->gotoxy(45, 8);
					cout << "Escolha as suas salas:";
					c->gotoxy(menu_x, menu_y);
					c->setBackgroundColor(fundo);
					cout << "Alojamento do capitao";
					c->gotoxy(menu_x, menu_y + 3);
					cout << "Auto-reparador";
					c->gotoxy(menu_x, menu_y + 6);
					cout << "Beliches";
					c->gotoxy(menu_x, menu_y + 9);
					cout << "Enfermaria";
					c->gotoxy(menu_x, menu_y + 12);
					cout << "Oficina de robotica";
					c->gotoxy(menu_x, menu_y + 15);
					cout << ">Propulsores adicionais";
					c->gotoxy(menu_x, menu_y + 18);
					cout << "Raio laser";
					c->gotoxy(menu_x, menu_y + 21);
					cout << "Sala de armas";
					c->gotoxy(menu_x, menu_y + 24);
					cout << "Sistema de seguranca interno";
					c->gotoxy(menu_x, menu_y + 27);
					cout << "Sair";
				}
				if (opcao == 7)
				{
					c->clrscr();
					c->gotoxy(45, 8);
					cout << "Escolha as suas salas:";
					c->gotoxy(menu_x, menu_y);
					c->setBackgroundColor(fundo);
					cout << "Alojamento do capitao";
					c->gotoxy(menu_x, menu_y + 3);
					cout << "Auto-reparador";
					c->gotoxy(menu_x, menu_y + 6);
					cout << "Beliches";
					c->gotoxy(menu_x, menu_y + 9);
					cout << "Enfermaria";
					c->gotoxy(menu_x, menu_y + 12);
					cout << "Oficina de robotica";
					c->gotoxy(menu_x, menu_y + 15);
					cout << "Propulsores adicionais";
					c->gotoxy(menu_x, menu_y + 18);
					cout << ">Raio laser";
					c->gotoxy(menu_x, menu_y + 21);
					cout << "Sala de armas";
					c->gotoxy(menu_x, menu_y + 24);
					cout << "Sistema de seguranca interno";
					c->gotoxy(menu_x, menu_y + 27);
					cout << "Sair";
				}
				if (opcao == 8)
				{
					c->clrscr();
					c->gotoxy(45, 8);
					cout << "Escolha as suas salas:";
					c->gotoxy(menu_x, menu_y);
					c->setBackgroundColor(fundo);
					cout << "Alojamento do capitao";
					c->gotoxy(menu_x, menu_y + 3);
					cout << "Auto-reparador";
					c->gotoxy(menu_x, menu_y + 6);
					cout << "Beliches";
					c->gotoxy(menu_x, menu_y + 9);
					cout << "Enfermaria";
					c->gotoxy(menu_x, menu_y + 12);
					cout << "Oficina de robotica";
					c->gotoxy(menu_x, menu_y + 15);
					cout << "Propulsores adicionais";
					c->gotoxy(menu_x, menu_y + 18);
					cout << "Raio laser";
					c->gotoxy(menu_x, menu_y + 21);
					cout << ">Sala de armas";
					c->gotoxy(menu_x, menu_y + 24);
					cout << "Sistema de seguranca interno";
					c->gotoxy(menu_x, menu_y + 27);
					cout << "Sair";
				}
				if (opcao == 9)
				{
					c->clrscr();
					c->gotoxy(45, 8);
					cout << "Escolha as suas salas:";
					c->gotoxy(menu_x, menu_y);
					c->setBackgroundColor(fundo);
					cout << "Alojamento do capitao";
					c->gotoxy(menu_x, menu_y + 3);
					cout << "Auto-reparador";
					c->gotoxy(menu_x, menu_y + 6);
					cout << "Beliches";
					c->gotoxy(menu_x, menu_y + 9);
					cout << "Enfermaria";
					c->gotoxy(menu_x, menu_y + 12);
					cout << "Oficina de robotica";
					c->gotoxy(menu_x, menu_y + 15);
					cout << "Propulsores adicionais";
					c->gotoxy(menu_x, menu_y + 18);
					cout << "Raio laser";
					c->gotoxy(menu_x, menu_y + 21);
					cout << "Sala de armas";
					c->gotoxy(menu_x, menu_y + 24);
					cout << ">Sistema de seguranca interno";
					c->gotoxy(menu_x, menu_y + 27);
					cout << "Sair";
				}
				if (opcao == 10)
				{
					c->clrscr();
					c->gotoxy(45, 8);
					cout << "Escolha as suas salas:";
					c->gotoxy(menu_x, menu_y);
					c->setBackgroundColor(fundo);
					cout << "Alojamento do capitao";
					c->gotoxy(menu_x, menu_y + 3);
					cout << "Auto-reparador";
					c->gotoxy(menu_x, menu_y + 6);
					cout << "Beliches";
					c->gotoxy(menu_x, menu_y + 9);
					cout << "Enfermaria";
					c->gotoxy(menu_x, menu_y + 12);
					cout << "Oficina de robotica";
					c->gotoxy(menu_x, menu_y + 15);
					cout << "Propulsores adicionais";
					c->gotoxy(menu_x, menu_y + 18);
					cout << "Raio laser";
					c->gotoxy(menu_x, menu_y + 21);
					cout << "Sala de armas";
					c->gotoxy(menu_x, menu_y + 24);
					cout << "Sistema de seguranca interno";
					c->gotoxy(menu_x, menu_y + 27);
					cout << ">Sair";
				}
			} while (!flag);  //Faz um ciclo de 'if' para escolher o valor de opcao

			//Em cada opcao do switch vai criar uma sala especifica na nave
			
			switch (opcao)
			{
			case 1:
				NI(c);
				break;
				opcao = 1;
			case 2:
				NI(c);
				break;
				opcao = 2;
			case 3:
			{
				//Spaceship.adiciona(new Beliche(i));
				p1 = new Beliche(i);
				Spaceship.adiciona(p1);
				//p1->adiciona(new Memb_Trip("ola"));
				
				p1->adiciona(new Memb_Trip(Spaceship.getCharTrip()));		
				Spaceship.incrementa_tripulantes();
				break;
			}
			case 4:
				NI(c);
				break;
				opcao = 4;
			case 5:
				NI(c);
				break;
				opcao = 5;
			case 6:
				NI(c);
				break;
				opcao = 6;
			case 7:
				NI(c);
				break;
				opcao = 7;
			case 8:
				NI(c);
				break;
				opcao = 8;
			case 9:
				NI(c);
				break;
				opcao = 9;
			case 10:
				sair();
				break;
			default:
				break;
			}
		}
	}


	Spaceship.DesenhaNave(8, 7, 20);
	ABC.cmd(Spaceship);
	/*NextDesign(Spaceship, c);*/
	
	
}

void Interface::NextDesign(Nave & Spaceship, Consola *c)
{
	comandos ABC;
	ABC.cmd(Spaceship);
}



