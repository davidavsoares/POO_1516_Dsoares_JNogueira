#pragma once
#include "bibliotecas.h"
#include "Nave.h"



void loopmusic(HSTREAM streamHandle) {	//Função que permite que o som de fundo se repita

	streamHandle = BASS_StreamCreateFile(FALSE, "C:\\Users\\David Soares\\Documents\\GitHub\\POO_1516_Dsoares_JNogueira\\POO_1516_JNogueira_DSoares\\POO_1516_JNogueira_DSoares\\space-alien-ambience.flac", 0, 0, 0);

	while (BASS_ChannelPlay(streamHandle, false));

}

void som_fundo()  //Função que habilita a reprodução do som de fundo existente no jogo
{
	HSTREAM streamHandle;


	BASS_Init(-1, 44100, 0, 0, NULL);
	BASS_SetVolume(3);

	thread plmusic(loopmusic, streamHandle);
}