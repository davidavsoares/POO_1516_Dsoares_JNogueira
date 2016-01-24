#include "Unidade.h"



Unidade::Unidade(string nome, int Entidade, int PV, int Respira, bool Flamejante, int Toxico, bool Indeciso, bool Misterioso, int Regenerador, int Exoesqueleto, bool Robotico, int Reparador, int Combatente, int Xenomorfo, int Casulo, int Mutatis, int Hipnotizador, bool Operador,bool Tripulacao, int InimigoX, int InimigoY,int Move, int Armado)
{
	this->	nome			=	nome;
	this->	Entidade		=	Entidade;
	this->	PV				=	PV;
	this->	Respira			=	Respira;
	this->	Flamejante		=	Flamejante;
	this->	Toxico			=	Toxico;
	this->	Indeciso		=	Indeciso;
	this->	Misterioso		=	Misterioso;
	this->	Regenerador		=	Regenerador;
	this->	Exoesqueleto	=	Exoesqueleto;
	this->	Robotico		=	Robotico;
	this->	Reparador		=	Reparador;
	this->	Combatente		=	Combatente;
	this->	Xenomorfo		=	Xenomorfo;
	this->	Casulo			=	Casulo;
	this->	Mutatis			=	Mutatis;
	this->	Hipnotizador	=	Hipnotizador;
	this->	Operador		=	Operador;
	this->	Tripulacao		=	Tripulacao;
	this->	InimigoX		=	InimigoX;
	this->	InimigoY		=	InimigoY;
	this->	Move			=	Move;
	this->	Armado			=	Armado;
	

}


Unidade::~Unidade()
{
}

Sala * Unidade::getOndeEstou()
{
	return this->ondeEstou;
}

void Unidade::setOndeEstou(Sala * p)
{
	this->ondeEstou = p;
}

void Unidade::SofrerDano(int Dano)
{
	this->PV = PV - Dano;
}

string Unidade::getNome()
{
	return this->nome;
}

void Unidade::printNome(int x, int y, Consola &c)
{
	c.gotoxy(x, y);

	cout << nome;
	
}

int Unidade::getTipo()
{
	return Entidade;
}

int Unidade::getReparador()
{
	return Reparador;
}

int Unidade::getRespira()
{
	return Respira;
}

bool Unidade::getOperador()
{
	return Operador;
}

int Unidade::getInimigoX()
{
	return this->InimigoX;
}

bool Unidade::getIndeciso()
{
	return this->Indeciso;
}



