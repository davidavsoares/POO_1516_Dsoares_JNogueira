#include "Sala.h"



Sala::Sala(int id)
{
	this->id = id;

	integridade = 100;
	//saude = 100;
	oxigenio = 100;
}

//Construtor por copia para quando uma sala muda para outra
//Sala::Sala(const Sala & outro)
//{
//	//->unidades = outro.unidades;
//	Unidade *p;
//	for (unsigned int i = 0; i < outro.unidades.size(); i++)
//	{
//		p = new Unidade(*outro.unidades[i]);
//		p->setOndeEstou(this);
//		this->unidades.push_back(p);
//	}
//}  

Sala::~Sala()
{

}

string Sala::toString() const
{
	ostringstream oss;
	
	oss << " Integridade: " << integridade << endl << " Saude: " << saude << endl << " Oxigenio: " << oxigenio << endl;

	return oss.str();
}

//int Sala::getSaude()
//{
//	return this->saude;
//}

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

void Sala::adiciona(Unidade * p)		//Adiciona uma unidade ao vector de unidades
{
	if (p->getOndeEstou() == nullptr) {
		this->unidades.push_back(p);
		unidades.back()->setOndeEstou(this);
	}
	else
		cout << "nao posso adicionar\n";


}

void Sala::remove(int id)
{
	int val = this->procura(id);
	if (val != -1)
	{
		this->unidades[val]->setOndeEstou(nullptr);
		unidades.erase(unidades.begin() + val);
	}
}

int Sala::procura(char nome) const
{
	for (unsigned int i = 0; i < unidades.size(); i++) 
	{
		if (unidades[i]->getNome() == nome)
			return i;
	}
	return -1;
}

Unidade * Sala::RetornaLocal(char nome)
{
	int i;
	i=procura(nome);

	return unidades[i];
}