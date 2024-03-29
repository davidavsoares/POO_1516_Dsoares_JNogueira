#pragma once
#include "bibliotecas.h"
#include "Sala.h"

#include "Propulsor.h"
#include "Beliche.h"
#include "Sala_Maquinas.h"
#include "Suporte_Vida.h"
#include "Controlo_Escudo.h"
#include "Ponte.h"
#include "Alojam_Capitao.h"
#include "Auto_Reparador.h"
#include "Enfermaria.h"
#include "Oficina_Robotica.h"
#include "Raio_Laser.h"
#include "Sala_Armas.h"
#include "Sistema_Seguranca.h"

#include "Memb_Trip.h"
#include "Capitao.h"
#include "Robot.h"
#include "Pirata.h"
#include "Xenomorfos.h"
#include "Inimigos.h"
#include "Geigermorfo.h"
#include "Casulo_de_Geigermorfo.h"
#include "Mxyzypykwi.h"
#include "Blob.h"

class Nave
{
	vector<Sala *> salas;

	int conta_propulsores, pos_x, pos_y, Tamanho, distancia, turno = 0;		//ELIMINAR CONTA PROPULSORES
	int conta_tripulantes;
	int escudo;
	int dificuldade;
	int distancia_total;
	bool laser = false;
	bool estado_escudo;
	bool fim;
public:
	Nave();
	void DesenhaNave(int x, int y, int tamanho);
	~Nave();
	void adiciona(Sala *p);
	string toString()const;

	void Quadrado(int x, int y, Consola c, int sala, int tamanho);

	void incrementa_propulsores();
	void MoveTripulante(string nome, int room);

	int getX();	int getY();	int getTamanho();



	void incrementa_tripulantes();

	int GetConta_tripulantes();

	string getCharTrip();

	void actualiza_distancia();

	void Adiciona_tripulante(int id);

	int getDistancia() const;

	void DesenhaLog(Consola &c);
	void Repara_salas();
	void Decrementa_oxigenio();		//Percorre todas as salas e chama a fun��o Consome_oxigenio() em cada uma delas
	void Auto_Repara();				//Percorre todas as salas e naquelas que forem do tipo "AUTO REPARADOR" repara as adjacentes
	void Reparador(int i, int soma);			//Funcao complementar a funcao Auto_Repara
	void Seguranca_Interna();					//Funcao que implementa o sistema de seguranca interno
//	void Analisa_Combates();				//Funcao que analisa todas as salas para verificar em quais h� combates

	void chama_regeneradores();
	void MAGOATESTE(string nome, int room);
	void Bordas(int X, int Y, int Xmax, int Ymax, Consola &c);
	void setTurno(int turno);
	int getTurno();

	string Return_caracteres(int caracter, int quantidade);

	void faz_evento();
	void MutatisMutandis();
	void remove(int id);

	int procura(int id) const;

	void adiciona(Sala *p, int posicao);

	void evento_meteoritos();
	void evento_piratas();
	void evento_xenomorfo();
	void evento_cosmico();

	void verifica_integridade();

	void setDificuldade(int x);
	void serDistanciaTotal();
	int getDificuldade()const;
	int getDistanciaTotal()const;

	

	int procura(string nome) const;

	void Pega_Fogo();
	void Percorre_Salas();
	void Suporta_vida(int i);
	void Percorre_Unidades();
	void Move_Sala_adjacente();

	void Combate();
	void IncrementaTurnoCasulo();

	void setFim(bool x);
	bool getFim()const;
	string getRelatorio()const;
	void Da_Armas();
};



