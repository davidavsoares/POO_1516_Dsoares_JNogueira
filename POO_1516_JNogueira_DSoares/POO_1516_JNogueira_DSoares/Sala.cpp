#include "Sala.h"



Sala::Sala(int id)
{
	this->id = id;

	integridade = 100;
	saude = 100;
	oxigenio = 100;
}


Sala::~Sala()
{

}

string Sala::toString() const
{
	ostringstream oss;
	
	oss << " Integridade: " << integridade << endl << " Saude: " << saude << endl << " Oxigenio: " << oxigenio << endl;

	return oss.str();
}

int Sala::getSaude()
{
	return this->saude;
}

int Sala::getOxigenio()
{
	return this->oxigenio;
}

int Sala::getIntegridade()
{
	return this->integridade;
}

int Sala::getId()
{
	return this->id;
}
