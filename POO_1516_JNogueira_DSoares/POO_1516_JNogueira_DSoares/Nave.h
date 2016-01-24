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

class Nave
{
	vector<Sala *> salas;

	int conta_propulsores, pos_x, pos_y, Tamanho, distancia;		//ELIMINAR CONTA PROPULSORES
	int conta_tripulantes;
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
	void Decrementa_oxigenio();		//Percorre todas as salas e chama a função Consome_oxigenio() em cada uma delas
	void Auto_Repara();				//Percorre todas as salas e naquelas que forem do tipo "AUTO REPARADOR" repara as adjacentes
	void Reparador(int i, int soma);			//Funcao complementar a funcao Auto_Repara
	void Seguranca_Interna();					//Funcao que implementa o sistema de seguranca interno
//	void Analisa_Combates();				//Funcao que analisa todas as salas para verificar em quais há combates
	int random(int max, int min);
	void chama_regeneradores();
	void MAGOATESTE(string nome, int room);
};



