#include "Sala.h"



Sala::Sala(int id, string n)
{
	this->id = id;
	nome = n;
	integridade = 100;
	oxigenio = 100;

	bool combate = 0;

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
	unidades.clear();
}

string Sala::toString() const
{
	
	ostringstream oss;
	
	oss << " Integridade: " << integridade << endl << " Saude: " << saude << endl << " Oxigenio: " << oxigenio << endl;

	return oss.str();
}

void Sala::toStatus(Consola &c, int x, int y)			//Nesta função imprime-se as variaveis da sala e as unidades presentes nela
{


	c.gotoxy(x, y);
	cout << " " <<nome;
	c.gotoxy(x, y + 1);
	cout << " Integridade: " << integridade;
	c.gotoxy(x, y + 2);
	cout << " Oxigenio: " << oxigenio;
	

		if (!unidades.empty())
		{


			for (int i = 0; i < unidades.size(); i++)
			{
				
				unidades[i]->printNome(x + i, y + 3, c);


			}
		}
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

void Sala::adiciona(Unidade * p)		//Adiciona uma unidade ao vector de unidades dando um ponteiro para a unidade
{
	

		this->unidades.push_back(p);
		unidades.back()->setOndeEstou(this);
		contador++;
		

}

void Sala::remove(string nome)		//Remove uma unidade da sala dando o nome
{
	int val = this->procura(nome);
	if (val != -1)
	{
		this->unidades[val]->setOndeEstou(nullptr);
		unidades.erase(unidades.begin() + val);
	}
	contador--;
}

int Sala::procura(string nome) const		//Procura uma unidade na sala dando o Nome, se esta estiver na sala retorna -1
{
	for (unsigned int i = 0; i < unidades.size(); i++) 
	{
		if (unidades[i]->getNome() == nome)
			return i;
	}
	return -1;
}

Unidade * Sala::RetornaLocal(string nome)		//Dado o nome do 
{
	int i;
	i=procura(nome);

	return unidades[i];
}

int Sala::getNUnidades()		//Retorna o numero de Unidades existentes na sala, nao bastava returnas unidades.size()?
{
	int contador = 0;

	if (unidades.size() > 0)
	{
		for (unsigned int i = 0; i < unidades.size(); i++)
		{
				contador++;
		}
	}
	return contador;
}

string Sala::getNome() const
{
	return nome;
}

void Sala::repara()
{
	if (nome != "Propulsor" && integridade < 100)
	{
		for (unsigned int i = 0; i < unidades.size(); i++)
		{
			integridade += unidades[i]->getReparador();
		}
		if (integridade > 100)
			integridade = 100;
	}
}
void Sala::Consome_oxigenio()
{
		for (unsigned int i = 0; i < unidades.size(); i++)
		{
			if (oxigenio > 0)
			{
				oxigenio -= unidades[i]->getRespira();
			}
			else if (unidades[i]->getRespira())
			{
				unidades[i]->SofrerDano(1);
			}
		}
}
int Sala::getOperadores()		//Retorna o numero de Tripulantes existentes na sala
{
	int contador = 0;

	if (unidades.size() > 0)
	{
		for (unsigned int i = 0; i < unidades.size(); i++)
		{
			if (unidades[i]->getOperador())
			{
				contador++;
			}
		}
	}
	return contador;
}
void Sala::setIntegridade(int integridade)
{
	this->integridade = integridade;
}
void Sala::Actualiza_Combate()
{
	int conta_1 = 0, conta_2 = 0;

	if (unidades.size() > 0)
	{
		for (unsigned int i = 0; i < unidades.size(); i++)
		{
			if (unidades[i]->getTipo() == 1)
			{
				conta_1++;
			}
			else if (unidades[i]->getTipo() == 2)
			{
				conta_2++;
			}
		}
		if (conta_1 > 0 && conta_2 > 0)
			combate = 1;
	}

}
bool Sala::getCombate()
{
	Actualiza_Combate();
	return this->combate;
}
void Sala::Magoa_inimigos(int Dano)
{
	for (unsigned int i = 0; i < unidades.size(); i++)
	{
		if (unidades[i]->getTipo() == 2)
		{
			unidades[i]->SofrerDano(Dano);
		}
	}
}