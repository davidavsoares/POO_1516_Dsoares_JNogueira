#include "Sala.h"



Sala::Sala(int id, string n)
{
	this->id = id;
	nome = n;
	integridade = 100;
	oxigenio = 100;

	combate = false;
	fogo = false;
	brecha = false;
	curto_circuito = false;

}

//Construtor por copia para quando uma sala muda para outra
Sala::Sala(Sala & outro, string nome)
{
	//->unidades = outro.unidades;
	Unidade *p;
	for (unsigned int i = 0; i < outro.unidades.size(); i++)
	{
		p = new Unidade(*outro.unidades[i]);
		p->setOndeEstou(this);
		this->unidades.push_back(p);
	}

	oxigenio = outro.getOxigenio();
	integridade = outro.getIntegridade();
	id = outro.getId();
	this->nome = nome;

}  

Sala::~Sala()
{
	unidades.clear();
}

string Sala::toString() const
{
	ostringstream oss;
	if (!unidades.empty())
	{
		oss << "Sala: " << id << endl;

		for (unsigned int i = 0; i < unidades.size(); i++)
		{

			oss << unidades[i]->toString() << endl;


		}
	}

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


			for (unsigned int i = 0; i < unidades.size(); i++)
			{
				
				unidades[i]->printNome(x + i, y + 3, c);
				unidades[i]->ReporExoesqueleto();

			}
		}

		if (fogo == true)
		{	
		c.gotoxy(x + 9, y + 6);
		cout << Return_caracteres(177, 1);
		c.gotoxy(x + 8, y + 7);
		cout << Return_caracteres(177, 3);
		c.gotoxy(x + 6, y + 8);
		cout << Return_caracteres(177, 7);
		//c.gotoxy(x + 4, y + 8);
		//cout << Return_caracteres(177, 11);
		}
		if (curto_circuito == true)
		{
			c.gotoxy(x, y + 5);
			cout << Return_caracteres(218, 3)<<"CURTO" << Return_caracteres(218, 1) <<"CIRCUITO"<< Return_caracteres(218, 2);
		}
		if (brecha == true)
		{
			c.gotoxy(x, y + 4);
			cout << Return_caracteres(224, 6) << "BRECHA" << Return_caracteres(224, 7);
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

int Sala::procura(string nome) const		//Procura uma unidade na sala dando o Nome, se esta não estiver na sala retorna -1
{
	for (unsigned int i = 0; i < unidades.size(); i++) 
	{
		if (unidades[i]->getNome() == nome)
			return i;
	}
	return -1;
}

bool Sala::Comunica_indecisao(string nome) const
{
	for (unsigned int i = 0; i < unidades.size(); i++)
	{
		if (unidades[i]->getNome() == nome)
			return unidades[i]->getIndeciso();
	}
	return 0;		// O que acontece quando uma Bool == -1? Erro?? Significa que o nome indicado nao está na sala
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
			if (brecha == true)
			{
				setBrecha(false);
			}
	/*		if (fogo == true)
			{
				setFogo(false);
			}*/
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
				
				if (unidades[i]->getFlamejante())
					setOxigenio(oxigenio - 5);

			}
			else if (unidades[i]->getRespira() > 0)
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
	

	if (integridade <= 0)
	{
		//termina jogo
	}
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
void Sala::Chama_regeneradores()
{
	for (unsigned int i = 0; i < unidades.size(); i++)
	{
		if (unidades[i]->getRegenerador() > 0 && unidades[i]->getSaude() < unidades[i]->getSaude_inicial())
		{
			unidades[i]->setSaude(unidades[i]->getRegenerador());
		}
	}
}
void Sala::Magoa_para_testes(string nome, int Dana)
{
	for (unsigned int i = 0; i < unidades.size(); i++)
	{
		if (unidades[i]->getNome() == nome)
		{
			unidades[i]->SofrerDano(Dana);
		}
	}
}
int Sala::toString(Consola &c, int x, int y) const
{
	unsigned int i;
	
	if (!unidades.empty())
	{
		c.gotoxy(x, y);
		if(id<10)
			cout << "------Sala : [0" << id << "]------";
		else
			cout << "------Sala : [" << id << "]------";


		for (i = 0; i < unidades.size(); i++)
		{
			c.gotoxy(x, y + i + 1);
			cout << unidades[i]->toString();


		}
	}
	return i + 2;

	
}

int Sala::Comunica_MMutandis() const
{
	int Soma_mutatis = 0;
	for (unsigned int i = 0; i < unidades.size(); i++)
	{
		Soma_mutatis = Soma_mutatis + unidades[i]->getMutatis();
	}
	return Soma_mutatis;		// O que acontece quando uma Bool == -1? Erro?? Significa que o nome indicado nao está na sala
}

void Sala::setOndeEstou(Nave * p)
{
	this->ondeEstou = p;
}

Nave * Sala::getOndeEstou()
{
	return this->ondeEstou;
}

void Sala::setFogo(bool estado)
{
	fogo = estado;
}
void Sala::setBrecha(bool estado)
{
	brecha = estado;
	if (brecha == true)
	{
		oxigenio = 0;
		fogo = false;
	}
}
void Sala::setCurtoCircuito(bool estado)
{
	curto_circuito = estado;
}
bool Sala::getFogo()const
{
	return fogo;
}
bool Sala::getBrecha()const
{
	return brecha;
}
bool Sala::getCurtoCircuito()const
{
	return curto_circuito;
}
void Sala::setOxigenio(int x)
{
	oxigenio = x;
	if (oxigenio < 0)
	{
		oxigenio = 0;
	}

	if (oxigenio > 100)
	{
		oxigenio = 100;
	}
}
void Sala::Analisa_oxigenio()
{
	if (oxigenio <= 0)
	{
		fogo = false;
	}

}
void Sala::AnalisaFogo()
{
	if (fogo == true)
	{
		if (rand() % 101 > 50)
		{
			setIntegridade(integridade - 10);
		}
		if (unidades.size() > 0)
		{
			for (unsigned int i = 0; i < unidades.size(); i++)
			{
				unidades[i]->SofrerDano(2);
			}
		}

	}
}
void Sala::AnalisaCurtoCircuito()
{
	if (curto_circuito == true)
	{
		if (unidades.size() > 0)
		{
			if (rand() % 101 < 25)
			{
				for (unsigned int i = 0; i < unidades.size(); i++)
				{
					unidades[i]->SofrerDano(unidades.size());
				}
			}
		}
	}
}
void Sala::Suporta_vida()
{
	if (nome == "Suporte Vida" && integridade == 100)
	{

	}
}
void Sala::PercorreSala()
{
	for (unsigned int i = 0; i < unidades.size(); i++)
	{
		if (unidades[i]->AnalisaUnidade() == false)
		{
			
			remove(unidades[i]->getNome());
		}
	}
}

string Sala::getNome_Unidade(int i)
{
	return unidades[i]->getNome();
}
int Sala::getMove_Unidade(int i)
{
	return unidades[i]->getMove();
}

void Sala::CombateSala()
{
	int dano = 0;
	for (unsigned int i = 0; i < unidades.size(); i++)
	{
		dano = 0;
		if (unidades[i]->getTipo() == 1)			//TRIPULANTES ATACAREM OS OUTROS
		{
			for (unsigned j = 0; j < unidades.size(); j++)
			{
				if (unidades[j]->getTipo() == 2 || unidades[j]->getTipo() == 3)
				{
					dano = unidades[i]->getCombatente() + unidades[i]->getArmado();
					unidades[j]->SofrerDano(dano);
					break;
				}
			}
		}
		if (unidades[i]->getTipo() == 2)			//INIMIGOS ATACAR OS OUTROS
		{
			for (unsigned j = 0; j < unidades.size(); j++)
			{
				if (unidades[j]->getTipo() == 1 || unidades[j]->getTipo() == 3)
				{
					dano = unidades[i]->getCombatente() + unidades[i]->getArmado() + unidades[i]->getInimigoX();
					unidades[j]->SofrerDano(dano);
					break;
				}
			}
			if (dano == 0)
			{
				dano = unidades[i]->getInimigoY();
				integridade -= dano;
			}

		}
		if (unidades[i]->getTipo() == 3 && unidades[i]->getNome() == "G")
		{
			for (unsigned j = 0; j < unidades.size(); j++)
			{
				if (unidades[j]->getTipo() == 1 || unidades[j]->getTipo() == 2)
				{
					if (rand() % 101 < unidades[i]->getCasulo())
					{
						unidades[j] = new Casulo_de_Geigermorfo("Q");
						unidades[j]->setTurnoCasulo(unidades[j]->getTurnoCasulo() + 1);
						break;
					}
					else 
					{
						dano = unidades[i]->getArmado() + unidades[i]->getXenomorfo();
						unidades[j]->SofrerDano(dano);
						break;
					}

				}
			}
		}
	}
}

void Sala::IncrementaCasulo()
{
	for (unsigned int i = 0; i < unidades.size(); i++)
	{
		if (unidades[i]->getTipo() == 3 && unidades[i]->getNome() == "Q")
		{
			unidades[i]->setTurnoCasulo(unidades[i]->getTurnoCasulo() + 1);
			if (unidades[i]->getTurnoCasulo() == 3)
			{
				unidades[i] = new Geigermorfo("G");
				unidades[i]->setTurnoCasulo(0);
			}
		}
	}
}

string Sala::Return_caracteres(int caracter, int quantidade)
{
	ostringstream oss;
	for (int i = 0; i < quantidade; i++)
	{
		oss << (char)caracter;
	}
	return oss.str();
}

void Sala::Enfermagem()
{
	for (unsigned int i = 0; i < unidades.size(); i++)
	{
		if(unidades[i]->getTipo() == 1)
			unidades[i]->SofrerDano(-1);
	}
}

Unidade * Sala::getMembroTripulacao()
{
	for (unsigned int i = 0; i < unidades.size(); i++)
	{
		if (unidades[i]->getTipo() == 1)
			return unidades[i];
	}
}

int Sala::getNTripulantes()	const	//Retorna o numero deTripulantes existentes na sala, nao bastava returnas unidades.size()?
{
	int contador = 0;

	if (unidades.size() > 0)
	{
		for (unsigned int i = 0; i < unidades.size(); i++)
		{
			if(unidades[i]->getTipo()==1)
				contador++;
		}
	}
	return contador;
}

int Sala::get1Tripulante() const
{

		for (unsigned int i = 0; i < unidades.size(); i++)
		{
			if (unidades[i]->getTipo() == 1 && unidades[i]->getNome() != "C" && unidades[i]->getNome() != "R")
				return i;
		}
	
	
}