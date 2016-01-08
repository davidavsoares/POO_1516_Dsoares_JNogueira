#include "Unidade.h"



Unidade::Unidade(string nome)
{
	this->nome = nome;


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


