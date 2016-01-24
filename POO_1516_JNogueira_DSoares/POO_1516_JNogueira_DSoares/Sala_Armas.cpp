#include "Sala_Armas.h"

Sala_Armas::Sala_Armas(int id):Sala(id, "Sala Armas")
{

}


Sala_Armas::~Sala_Armas()
{
}

Sala_Armas::Sala_Armas(Sala & outro) : Sala(outro, "Sala Armas")
{

}