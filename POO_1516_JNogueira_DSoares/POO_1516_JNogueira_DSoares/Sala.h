#pragma once
#include "bibliotecas.h"
#include "Unidade.h"
#include "Casulo_de_Geigermorfo.h"
#include "Geigermorfo.h"

class Nave;
class Sala
{
	vector<Unidade *> unidades;
	int oxigenio, integridade, saude, id, contador = 0;
	bool combate;
	bool fogo;
	bool brecha;
	bool curto_circuito;
	string nome;
	Nave *ondeEstou = nullptr;
public:
	Sala(int id, string n);
	~Sala();
	string toString()const;
	void toStatus(Consola &c, int x, int y);
	//int getSaude();					// Saude == Integridade?????
	int getOxigenio();				// Retorna a quantidade de oxigenio
	int getIntegridade();			//Retorna a integridade
	int getId();					// Retorna o id
	void adiciona(Unidade * p);		// Adiciona uma unidade á sala
	void remove(string nome);			// Remove uma unidade de uma determinada sala indicando o nome da unidade
	int procura(string nome) const;		// Procura um id
	string getNome()const;					// Retorna Nome da sala
	//void setNome();						// Adiciona nome à sala
	Unidade * RetornaLocal(string nome);

	//void mostra_trip(int x, int y, Consola &c);				// Imprime as unidades presente na sala

	int getNUnidades();
	void repara();
	void Consome_oxigenio();
	int getOperadores();		//Retorna o numero de unidades com capacidade de OPERADOR existentes na sala
	void setIntegridade(int integridade);
	bool getCombate();					//Funcao que retorna se existe um combate na sala
	void Actualiza_Combate();
	void Magoa_inimigos(int Dano);
	bool Comunica_indecisao(string nome) const;		// Indicando o nome de uma unidade retorna se esta está indecisa
	void Chama_regeneradores();
	void Magoa_para_testes(string nome, int Dana);
	int toString(Consola &c, int x, int y) const;
	Sala(Sala & outro, string nome);
	int Comunica_MMutandis() const;

	void setFogo(bool estado);
	void setBrecha(bool estado);
	void setCurtoCircuito(bool estado);
	bool getFogo()const;
	bool getBrecha()const;
	bool getCurtoCircuito()const;

	void setOndeEstou(Nave * p);

	void setOxigenio(int x);

	Nave * getOndeEstou();

	void Sala::Analisa_oxigenio();

	void AnalisaCurtoCircuito();
	void AnalisaFogo();
	void Suporta_vida();
	void PercorreSala();
	string getNome_Unidade(int i);
	int getMove_Unidade(int i);
	void CombateSala();
	void IncrementaCasulo();
	string Return_caracteres(int caracter, int quantidade);
	void Enfermagem();
	Unidade *getMembroTripulacao();
	int getNTripulantes()	const;
	int get1Tripulante() const;
};

