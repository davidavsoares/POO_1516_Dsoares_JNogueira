#include "Unidade.h"



Unidade::Unidade(string nome, int Tipo)
{
	this->nome = nome;
	this->Tipo = Tipo;


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
	this->saude = saude - Dano;
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
	return Tipo;
}


