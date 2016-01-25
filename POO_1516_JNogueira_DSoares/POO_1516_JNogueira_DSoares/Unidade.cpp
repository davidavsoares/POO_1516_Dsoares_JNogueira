#include "Unidade.h"



Unidade::Unidade(string nome, int Entidade, int PV, int Respira, bool Flamejante, int Toxico, bool Indeciso, bool Misterioso, int Regenerador, int Exoesqueleto, bool Robotico, int Reparador, int Combatente, int Xenomorfo, int Casulo, int Mutatis, int Hipnotizador, bool Operador,bool Tripulacao, int InimigoX, int InimigoY,int Move, int Armado)
{
	this->	nome			=	nome;
	this->	Entidade		=	Entidade;
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

	Saude_inicial = this->PV = PV;
	

}


Unidade::~Unidade()
{
}

Sala * Unidade::getOndeEstou()
{
	return this->ondeEstou;
}

string Unidade::toString()
{
	ostringstream oss;
		oss << "-Nome: [" << nome << "]  Saude: [" << PV << "]-";
	return oss.str();
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

int Unidade::getSaude()
{
	return this->PV;
}

int Unidade::getSaude_inicial()
{
	return this->Saude_inicial;
}

int Unidade::getRegenerador()
{
	return this->Regenerador;
}

void Unidade::setSaude(int cura)
{
	PV += cura;

	if (PV > Saude_inicial)
	{
		PV = Saude_inicial;
	}
}

int Unidade::getMutatis()
{
	return this->Mutatis;
}

bool Unidade::getFlamejante()
{
	return this->Flamejante;
}





