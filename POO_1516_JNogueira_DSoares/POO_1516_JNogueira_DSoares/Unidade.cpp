#include "Unidade.h"



Unidade::Unidade(char nome)
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

int Unidade::getNome()
{
	return this->nome;
}

void ImprimeUni()
{

}


