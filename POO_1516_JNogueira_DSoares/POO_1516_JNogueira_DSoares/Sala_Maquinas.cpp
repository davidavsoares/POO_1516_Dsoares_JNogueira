#include "Sala_Maquinas.h"



Sala_Maquinas::Sala_Maquinas(int id) :Sala(id, "Sala Maquinas") {}


Sala_Maquinas::~Sala_Maquinas()
{
}

Sala_Maquinas::Sala_Maquinas(Sala & outro) : Sala(outro, "Sala Maquinas")
{

}