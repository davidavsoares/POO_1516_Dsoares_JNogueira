#include "Funcoes_main.h"
#include "bass.h"
#include "comandos.h"
#include "Interface.h"
#include "Sala.h"
#include "Nave.h"

void main()
{
	//Consola c;	//Enviar consola para a Nave!!!
	//som_fundo();

	Interface ui;

	ui.inicia();

	Sala a(1);

	//BASS_Free  //-> � suposto ser uma fun��o criada?
}

///////////////////////////////////OBSERVACOES//////////////////////////////////
//
//	Nave -> CONTEM -> Salas -> CONTEM -> TRIPULANTES
//
//	Nave com vector de salas que tem vector de pessoas?
//	Nave com lista de salas que cada uma contem um vector de pessoas?


//	CONSIDERO QUE AS SALAS DEVEM TER VECTORES!!! QUANTO � NAVE J� ME � INDIFERENTE

// Nave com array dinamico de salas?