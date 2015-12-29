#include "Unidade.h"



Unidade::Unidade()
{

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

int Unidade::getId()
{
	return this->id;
}

