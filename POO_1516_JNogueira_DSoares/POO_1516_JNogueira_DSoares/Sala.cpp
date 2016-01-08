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

void Sala::toStatus(Consola &c, int x, int y)
{


	c.gotoxy(x, y);
	cout << " Integridade: " << integridade;
	c.gotoxy(x, y + 1);
	cout << " Oxigenio: " << oxigenio;
	

		if (!unidades.empty())
		{


			for (int i = 0; i < unidades.size(); i++)
			{
				
				unidades[i]->printNome(x + i, y + 2, c);


			}
		}
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
	

		this->unidades.push_back(p);
		unidades.back()->setOndeEstou(this);
		contador++;
		

}

void Sala::remove(string nome)
{
	int val = this->procura(nome);
	if (val != -1)
	{
		this->unidades[val]->setOndeEstou(nullptr);
		unidades.erase(unidades.begin() + val);
	}
	contador--;
}

int Sala::procura(string nome) const
{
	for (unsigned int i = 0; i < unidades.size(); i++) 
	{
		if (unidades[i]->getNome() == nome)
			return i;
	}
	return -1;
}

Unidade * Sala::RetornaLocal(string nome)
{
	int i;
	i=procura(nome);

	return unidades[i];
}

void Sala::mostra_trip(int x,int y, Consola &c)
{

	for (int i = 0; i <= contador; i++)
	{
		c.gotoxy(x + i, y);
		//unidades[i]->getTipo(c);

	}


}