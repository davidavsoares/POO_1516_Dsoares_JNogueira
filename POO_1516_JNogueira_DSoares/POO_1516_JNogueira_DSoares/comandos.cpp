#include "comandos.h"

int verifica = 1;

comandos::comandos()
{
}

comandos::~comandos()
{
}

void comandos::cmd(Nave & Spaceship)
{
	Consola c;
	//int tecla;
	char buffer[512];


	//c.clrscr();
	c.gotoxy(5, 40);
	//cout << "Primir C para digitar os comandos";
	//do
	//{
	//	tecla = c.getch();
	//} while (tecla != 99 );

	//c.clrscr();
	c.gotoxy(5, 40);
	cout << ">comando: ";


	cin.getline(buffer, 512);
	

	analisa_comandos(buffer, Spaceship);

}

void comandos::analisa_comandos(string b, Nave & Spaceship)
{
	stringstream comandos(b);
	int j = 0;
	string buffer;
	string *palavras;

	
	while (comandos >> buffer)
		j++;

	palavras = new string[j];
	j = 0;
	comandos.clear();
	comandos.seekg(0, ios::beg);

	while (comandos >> buffer)
	{
		palavras[j] = buffer;
		j++;
	}
	if (palavras[0] == "\n")
		cout << "Deve indroduzir um comando válido";

	if (palavras[0] == "mover")
	{
		int/* l,*/ c;
		
		c = stoi(palavras[2], nullptr, 10);
		Spaceship.MoveTripulante(palavras[1], c);		//COMANDO FEITO FALTA PASSAR NAVE COMO ARGUMENTO
		Spaceship.DesenhaNave(8, 7, 20);
		
		cmd(Spaceship);
		
	}
	

	if (palavras[0] == "sair")
	{
		Interface ui;
		ui.sair();
	}

	if (palavras[0] == "turno")
	{
		fim_turno(Spaceship);
		inicio_turno(Spaceship);
		
		Spaceship.DesenhaNave(8, 7, 20);
		cmd(Spaceship);
	}

}

void comandos::inicio_turno(Nave & Spaceship)
{



}

void comandos::fim_turno(Nave & Spaceship)
{
	Spaceship.Repara_salas();
	Spaceship.Decrementa_oxigenio();
	Spaceship.actualiza_distancia();
	
}